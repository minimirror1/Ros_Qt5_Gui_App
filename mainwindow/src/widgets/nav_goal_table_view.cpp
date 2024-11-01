#include "widgets/nav_goal_table_view.h"
#include <QComboBox>
#include <QFileDialog>
#include <QHeaderView>
#include <QLabel>
#include <QPushButton>
#include <QtConcurrent>
#include <fstream>
#include "algorithm.h"
#include "config/config_manager.h"
#include "logger/logger.h"
NavGoalTableView::NavGoalTableView(QWidget *_parent_widget)
    : QTableView(_parent_widget) {
  table_model_ = new QStandardItemModel();
  setModel(table_model_);
  QStringList table_h_headers;
  table_h_headers << "위치명"
                  << "작업상태" 
                  << "삭제"
                  << "실행";
  QHeaderView *headerView = new QHeaderView(Qt::Horizontal);
  headerView->setSectionResizeMode(QHeaderView::ResizeToContents);
  headerView->setSelectionBehavior(QAbstractItemView::SelectRows);
  headerView->setCascadingSectionResizes(false);
  setSelectionBehavior(QAbstractItemView::SelectRows);
  setSelectionMode(QAbstractItemView::SingleSelection);
  this->setHorizontalHeader(headerView);
  // 添加数据模型
  table_model_->setHorizontalHeaderLabels(table_h_headers);
  connect(table_model_, &QStandardItemModel::itemChanged, this,
          &NavGoalTableView::onItemChanged);
}

NavGoalTableView::~NavGoalTableView() {//241101
  StopTaskChain();
  // 기존 sleep 제거 (더 이상 필요하지 않음)
}

void NavGoalTableView::onItemChanged(QStandardItem *item) {
  if (item->column() == 0) {
    qDebug() << "위치명: " << item->text();
  } else if (item->column() == 2) {
    qDebug() << "작업상태: " << item->checkState();
  }
}
void NavGoalTableView::UpdateTopologyMap(const TopologyMap &_topology_map) {
  topologyMap_ = _topology_map;
}
void NavGoalTableView::UpdateSelectPoint(const TopologyMap::PointInfo &point) {
  if (!this->isEnabled())
    return;

  QWidget *widget =
      indexWidget(model()->index(table_model_->rowCount() - 1, 0));
  if (widget) {
    QComboBox *comboBox = static_cast<QComboBox *>(widget);
    if (comboBox->currentText() == "")
      comboBox->setCurrentText(point.name.c_str());
  }
}
void NavGoalTableView::AddItem() {
  QComboBox *comboBox = new QComboBox();
  for (auto point : topologyMap_.points) {
    comboBox->addItem(point.name.c_str());
  }
  comboBox->addItem("");
  comboBox->setCurrentText("");
  QLabel *label_status = new QLabel("None");
  QPushButton *button_remove = new QPushButton("Delete");
  QPushButton *button_run = new QPushButton("Run");
  int row = table_model_->rowCount();

  connect(button_remove, &QPushButton::clicked, [this, row]() {
    QModelIndexList selectedIndexes = selectionModel()->selectedRows();
    if (selectedIndexes.size() == 1) {
      table_model_->removeRow(selectedIndexes[0].row());
    }
  });
  table_model_->insertRow(row);

  setIndexWidget(table_model_->index(row, 0), comboBox);
  setIndexWidget(table_model_->index(row, 1), label_status);
  setIndexWidget(table_model_->index(row, 2), button_remove);
  setIndexWidget(table_model_->index(row, 3), button_run);
}

// GUI 의 Task Tab -> Start Task 버튼 클릭시 호출되는 함수
void NavGoalTableView::StartTaskChain(bool is_loop) {
  is_task_chain_running_ = true;
  task_chain_future_ = QtConcurrent::run([this, is_loop]() {
    // 모든 행의 상태를 "Wait"로 초기화
    for (int row = 0; row < table_model_->rowCount(); ++row) {
      QLabel *label_status = static_cast<QLabel *>(indexWidget(model()->index(row, 1)));
      label_status->setText("Wait");
    }

    do {
      for (int row = 0; row < table_model_->rowCount(); ++row) {
        QComboBox *comboBoxName =
            static_cast<QComboBox *>(indexWidget(model()->index(row, 0)));
        QLabel *label_status =
            static_cast<QLabel *>(indexWidget(model()->index(row, 1)));
        label_status->setText("Running");
        TopologyMap::PointInfo point =
            topologyMap_.GetPoint(comboBoxName->currentText().toStdString());
        if (point.name == "") {
          label_status->setText("Point Not Found!");
          continue;
        }
        RobotPose target_pose = point.ToRobotPose();
        emit signalSendNavGoal(target_pose);
        RobotPose diff = absoluteDifference(target_pose, robot_pose_);
        while (diff.mod() > 0.3 || fabs(diff.theta) > deg2rad(15)) {
          LOG_INFO("Task[" << row << "] chain is running point:" << comboBoxName->currentText().toStdString() << " diff:" << diff << " mode:" << diff.mod() << " deg:" << rad2deg(fabs(diff.theta)));
          diff = absoluteDifference(target_pose, robot_pose_);

          // 로봇이 움직이지 않는 경우를 감지하기 위한 정적 변수
          static RobotPose last_robot_pose = robot_pose_;
          static int stationary_count = 0;
          
          // 로봇의 위치가 변하지 않았는지 확인
          if (absoluteDifference(last_robot_pose, robot_pose_).mod() < 0.01) {
            stationary_count++;
            // 1초(10 * 100ms) 동안 움직임이 없으면 목표점 재전송
            if (stationary_count >= 10) {
              emit signalSendNavGoal(target_pose);
              LOG_INFO("Task[" << row << "] retarget point:" << comboBoxName->currentText().toStdString());
              stationary_count = 0;
            }
          } else {
            stationary_count = 0;
          }
          
          last_robot_pose = robot_pose_;

          if (!is_task_chain_running_) {
            emit signalTaskFinish();
            LOG_INFO("Task chain is stopped");
            return;
          }
          QThread::msleep(100);
        }
        label_status->setText("Finish");
      }
    } while (is_loop);

    LOG_INFO("Task chain is finished");
    emit signalTaskFinish();
  });
}
bool NavGoalTableView::LoadTaskChain(const std::string &name) {
  // 清空模型
  table_model_->removeRows(0, table_model_->rowCount());
  std::ifstream file(name);
  std::string json((std::istreambuf_iterator<char>(file)),
                   std::istreambuf_iterator<char>());
  file.close();
  JS::ParseContext parseContext(json);
  // JS::ParseContext has the member
  if (parseContext.parseTo(task_chain_) != JS::Error::NoError) {
    std::string errorStr = parseContext.makeErrorString();
    fprintf(stderr, "Error parsing struct %s\n", errorStr.c_str());
    return false;
  }
  for (auto point : task_chain_.points) {
    QComboBox *comboBox = new QComboBox();
    bool find_point = false;
    for (auto p : topologyMap_.points) {
      comboBox->addItem(p.name.c_str());
      if (point.name == p.name) {
        find_point = true;
      }
    }
    if (!find_point) {
      LOG_ERROR(
          "Can't find point " << point.name << " in topology map skip this point!");
      delete comboBox;
      continue;
    }
    comboBox->setCurrentText(QString::fromStdString(point.name));
    QLabel *label_status = new QLabel("None");
    QPushButton *button_remove = new QPushButton("Delete");
    QPushButton *button_run = new QPushButton("Run");
    int row = table_model_->rowCount();

    connect(button_remove, &QPushButton::clicked, [this, row]() {
      QModelIndexList selectedIndexes = selectionModel()->selectedRows();
      if (selectedIndexes.size() == 1) {
        table_model_->removeRow(selectedIndexes[0].row());
      }
    });
    table_model_->insertRow(row);

    setIndexWidget(table_model_->index(row, 0), comboBox);
    setIndexWidget(table_model_->index(row, 1), label_status);
    setIndexWidget(table_model_->index(row, 2), button_remove);
    setIndexWidget(table_model_->index(row, 3), button_run);
  }
  return true;
}
bool NavGoalTableView::SaveTaskChain(const std::string &name) {
  for (int row = 0; row < table_model_->rowCount(); ++row) {
    QComboBox *comboBoxName =
        static_cast<QComboBox *>(indexWidget(model()->index(row, 0)));
    QLabel *label_status =
        static_cast<QLabel *>(indexWidget(model()->index(row, 1)));
    label_status->setText("Running");
    TopologyMap::PointInfo point =
        topologyMap_.GetPoint(comboBoxName->currentText().toStdString());
    if (point.name == "") {
      label_status->setText("Point Not Found!");
      continue;
    }
    task_chain_.points.push_back(point);
  }
  std::string pretty_json = JS::serializeStruct(task_chain_);
  return Config::ConfigManager::writeStringToFile(name, pretty_json);
}
void NavGoalTableView::StopTaskChain() {
  if (is_task_chain_running_) {
    is_task_chain_running_ = false;
        // 쓰레드가 완전히 종료될 때까지 대기
    if (task_chain_future_.isRunning()) {
      task_chain_future_.waitForFinished();
    }
    emit signalTaskFinish();//241101
  }
}
void NavGoalTableView::UpdateRobotPose(const RobotPose &pose) {
  robot_pose_ = pose;
}
