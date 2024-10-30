<!--
 * @Author: chengyangkj chengyangkj@qq.com
 * @Date: 2023-09-02 07:23:43
 * @LastEditors: chengyangkj chengyangkj@qq.com
 * @LastEditTime: 2023-10-06 14:03:03
 * @FilePath: /ROS2_Qt5_Gui_App/README.md
-->
Simplified Chinese | [한국어](./README_kr.md)
*경량 ROS1/ROS2 이동 로봇 HMI 소프트웨어*

![GitHub last commit](https://img.shields.io/github/last-commit/chengyangkj/Ros_Qt5_Gui_App?style=flat-square)
![GitHub stars](https://img.shields.io/github/stars/chengyangkj/Ros_Qt5_Gui_App?style=flat-square)
![GitHub forks](https://img.shields.io/github/forks/chengyangkj/Ros_Qt5_Gui_App?style=flat-square)
![GitHub issues](https://img.shields.io/github/issues/chengyangkj/Ros_Qt5_Gui_App?style=flat-square)
<a href="http://qm.qq.com/cgi-bin/qm/qr?_wv=1027&k=mvzoO6tJQtu0ZQYa_itHW7JrT0i4OCdK&authKey=exOT53pUpRG85mwuSMstWKbLlnrme%2FEuJE0Rt%2Fw6ONNvfHqftoWMay03mk1Qi7yv&noverify=0&group_code=797497206">
<img alt="Static Badge" src="https://img.shields.io/badge/QQ%e7%be%a4-797497206-purple">
</a>

![humble](https://github.com/chengyangkj/Ros_Qt5_Gui_App/actions/workflows/ros_humble_build.yaml/badge.svg)
![foxy](https://github.com/chengyangkj/Ros_Qt5_Gui_App/actions/workflows/ros_foxy_build.yaml/badge.svg)
![noetic](https://github.com/chengyangkj/Ros_Qt5_Gui_App/actions/workflows/ros_noetic_build.yaml/badge.svg)
![galactic](https://github.com/chengyangkj/Ros_Qt5_Gui_App/actions/workflows/ros_galactic_build.yaml/badge.svg)
![melodic](https://github.com/chengyangkj/Ros_Qt5_Gui_App/actions/workflows/ros_melodic_build.yaml/badge.svg)


<!-- 
<a href="https://www.bilibili.com/video/BV14h4y1w7TC">
<img alt="Static Badge" src="https://img.shields.io/badge/%E8%A7%86%E9%A2%91%E6%95%99%E7%A8%8B-208647">
</a>
<a href="https://www.bilibili.com/video/BV11h4y1y74H">
<img alt="Static Badge" src="https://img.shields.io/badge/Linux%E9%83%A8%E7%BD%B2%E8%A7%86%E9%A2%91-208647">
</a>
-->

이 프로젝트는 Qt5를 기반으로 개발되었으며 CMake로 빌드되어 동일한 코드베이스로 ROS1/ROS2 시스템에서 사용할 수 있습니다(본 프로젝트는 CI가 통합되어 여러 ROS 버전/시스템 버전에서의 사용성을 보장합니다).

소프트웨어는 컴파일 시 환경 변수에서 ROS1/ROS2 환경을 자동으로 감지하여 빌드하며, ROS 통신과 인터페이스를 분리합니다.

소프트웨어의 모든 기능은 자체적으로 구현되어 있어 성능이 낮은 엣지 디바이스에서도 쉽게 실행할 수 있습니다.

기능/TODO:

| 기능                          | 상태 | 비고                 |
| ---------------------------- | ---- | -------------------- |
| ROS1/ROS2 통신               | ✅    |                      |
| 전역/지역 지도 표시           | ✅    |                      |
| 로봇 실시간 위치 표시         | ✅    |                      |
| 로봇 속도 대시보드            | ✅    |                      |
| 로봇 수동 제어               | ✅    |                      |
| 로봇 재위치 설정             | ✅    |                      |
| 로봇 단일/다중 지점 내비게이션 | ✅    |                      |
| 로봇 전역/지역 경로 계획 표시  | ✅    |                      |
| 로봇 토폴로지 맵 기능         | ✅    |                      |
| 배터리 잔량 표시             | ✅    |                      |
| 지도 편집 기능               | ✅    |                      |
| 로봇 내비게이션 작업 체인     | ✅    | 버그 존재             |
| 지도 로드                    | ✅    |                      |
| 지도 저장                    | ✅    |                      |
| 카메라 이미지 표시           | ✅    | rqt_image_view에서 이식 |
| 로봇 차체 윤곽 표시          | ✅    | 비정형 차체 구성 지원   |
| rosbridge 기반 통신          | ✍    |                      |
| 3D 레이어 표시              | 🏷️    |                      |
| 토폴로지 위치 경로 계획      | 🏷️    |                      |
| 로봇 이동 경로 기록          | 🏷️    |                      |

흥미로운 인터페이스나 기능 요구사항이 있으시다면 [여기](https://github.com/chengyangkj/Ros_Qt5_Gui_App/issues/29)에 제안해 주시기 바랍니다. 버그가 있다면 [issues](https://github.com/chengyangkj/Ros_Qt5_Gui_App/issues)에 제보해 주시면 최대한 빨리 수정하도록 하겠습니다! 또한 Merge Request를 통해 프로젝트 개발에 참여하시는 것도 매우 환영합니다~

중국 내 미러 저장소 링크: [gitee](https://gitee.com/chengyangkj/Ros_Qt5_Gui_App)

  <picture>
    <source media="(prefers-color-scheme: dark)" srcset="https://api.star-history.com/svg?repos=chengyangkj/Ros_Qt5_Gui_App&type=Timeline&theme=dark" />
    <source media="(prefers-color-scheme: light)" srcset="https://api.star-history.com/svg?repos=chengyangkj/Ros_Qt5_Gui_App&type=Timeline" />
    <img alt="Star History Chart" src="https://api.star-history.com/svg?repos=chengyangkj/Ros_Qt5_Gui_App&type=Timeline" width="75%" />
  </picture>

# Start of Selection
*프로젝트 스크린샷*

![image.png](./doc/images/main.png)
 
![image.png](./doc/images/main.gif)

![mapping.png](./doc/images/mapping.gif)

플러터 기반의 ROS1/ROS2 크로스 플랫폼 모바일 로봇 인간-기계 상호작용 소프트웨어가 공식적으로 오픈 소스되었습니다:
![flutter.png](./doc/images/flutter.png)
필요하신 경우 [ROS_Flutter_Gui_App](https://github.com/chengyangkj/ROS_Flutter_Gui_App)로 이동해 주시기 바랍니다.

*목차*

<!-- TOC -->

- [一,Release 版本下载使用](#一release-版本下载使用)
- [二,编译](#二编译)
  - [1,环境安装](#1环境安装)
  - [2,克隆/下载本项目:](#2克隆下载本项目)
  - [3,编译项目](#3编译项目)
  - [4,运行项目](#4运行项目)
- [三,IDE配置说明(QtCreator/Vscode)](#三ide配置说明qtcreatorvscode)
    - [3.1 QtCreator打开项目教程](#31-qtcreator打开项目教程)
- [四,使用说明](#四使用说明)
  - [4.1,多机通信配置](#41多机通信配置)
  - [4.2,配置文件](#42配置文件)
  - [4.3,重定位位姿态发布](#43重定位位姿态发布)
  - [4.4,地图编辑](#44地图编辑)
    - [4.4.1 拓扑地图(机器人导航点设置)](#441-拓扑地图机器人导航点设置)
    - [4.4.2 橡皮擦](#442-橡皮擦)
    - [4.4.3 画笔](#443-画笔)
    - [4.4.4 线段绘制](#444-线段绘制)
    - [4.4.5 地图保存](#445-地图保存)
    - [4.4.6 地图加载](#446-地图加载)
  - [4.5,手动控制机器人](#45手动控制机器人)
  - [4.6,速度仪表盘](#46速度仪表盘)
  - [4.7,电池电量显示](#47电池电量显示)
  - [4.8 多点连续导航](#48-多点连续导航)
  - [4.9,相机图片显示](#49相机图片显示)
  - [4.10,机器人车身轮廓显示](#410机器人车身轮廓显示)
- [五,相关链接](#五相关链接)
- [六,相关教程及交流群](#六相关教程及交流群)

<!-- /TOC -->

# 一, Release 버전 다운로드 및 사용

소프트웨어를 단순히 사용하고 싶고 코드 구현을 이해할 필요가 없다면, 컴파일된 Release 버전을 다운로드하여 바로 사용할 수 있습니다.

Release 버전 사용 전제조건: ==시스템에 ROS 환경이 설치되어 있고 환경 변수에 source 되어 있어야 합니다==

이 저장소는 CI를 사용하여 각 플랫폼의 Release 버전을 자동 생성합니다(현재는 X86_64 버전만 제공, Arm 환경은 직접 컴파일 필요). 프로젝트의 [Release 페이지](https://github.com/chengyangkj/Ros_Qt5_Gui_App/releases)에서 해당 ROS 버전의 최신 Release를 다운로드하면 압축 해제 후 바로 사용할 수 있습니다.

사용 방법:
터미널에서 압축 해제된 폴더로 이동한 후 다음 명령어를 실행합니다:
```
sudo chmod a+x ./ros_qt5_gui_app
./ros_qt5_gui_app
```

# 2, 컴파일


>💡 注意，为了保证此项目同时兼容ROS1与ROS2，此项目不使用ROS1/ROS2的catkin_make/colcon构建系统进行够建，而是使用标准CMake进行构建，这也就意味着，本项目不会被ROS自动识别为功能包

[bilibili教程](https://www.bilibili.com/video/BV1ex4y1a7or/?vd_source=75c00cfe4b6a37d574e447ad1e864d29)

다음 가이드를 참조하여 이 프로젝트를 처음부터 구축/실행할 수 있습니다:

## 1,환경 설치 

일반적으로는 다음 기본 패키지만 설치하면 이 프로젝트를 컴파일할 수 있습니다:

```
sudo apt-get update
sudo apt-get install qtbase5-private-dev libqt5svg5-dev libsdl-image1.2-dev libsdl1.2-dev -y
```

만약 위의 설치 후에도 작동하지 않는다면, 다음 명령어를 실행하여 모든 종속성을 설치할 수 있습니다:

```
sudo apt-get install qtbase5-dev qt5-qmake qtbase5-dev-tools libqt5svg5-dev qtbase5-private-dev libeigen3-dev libgtest-dev libsdl-image1.2-dev libsdl1.2-dev -y
```

## 2,프로젝트 클론/다운로드:


```
mkdir -p ~/qt_ws
cd ~/qt_ws
git clone https://github.com/chengyangkj/Ros_Qt5_Gui_App
```

// 주의: GitHub에서 다운로드 속도가 느릴 경우, 아래 명령어를 사용하여 Gitee에서 가져올 수 있습니다.

```
git clone https://gitee.com/chengyangkj/Ros_Qt5_Gui_App

```


## 3, 프로젝트 컴파일

다음 명령어를 수동으로 실행하여 컴파일할 수 있습니다(환경 변수에 따라 자동으로 ROS1 또는 ROS2 환경을 인식합니다):

```
cd ~/qt_ws/ROS2_Qt5_Gui_App
mkdir -p build
cd build
cmake ..
make

```

또는 아래 스크립트를 실행하여 ROS 버전을 수동으로 지정하고 원클릭 컴파일을 수행할 수 있습니다:

```
cd ~/qt_ws/ROS2_Qt5_Gui_App

```
ROS1:

```
sh ./build_ros1.sh

```
ROS2:

```
sh ./build_ros2.sh
```

## 4, 프로젝트 실행
```
cd ~/qt_ws/ROS2_Qt5_Gui_App/build
./ros_qt5_gui_app

```


소프트웨어 구성 파일 경로(소프트웨어를 한 번 실행하면 실행 파일의 상대 경로에 자동으로 생성됩니다)

# 3. IDE 설정 설명(QtCreator/Vscode)

>💡 이 부분은 초보자를 위한 친절한 안내입니다. ROS/C++/Qt 숙련자라면 이 부분을 건너뛰어도 됩니다.

많은 ROS 초보자들이 Qt를 배울 때 IDE와 컴파일러의 차이를 이해하지 못하는 오해가 있습니다. QtCreator, VSCode, CLion 등은 모두 IDE([IDE란 무엇인가](https://www.zhihu.com/question/24833708))입니다.
IDE가 없어도 텍스트 편집기만으로도 코드를 작성할 수 있습니다(효율성이 낮고 코드 제안이 없음). 작성 후 make 명령어로 컴파일하면 됩니다.

실제로 Ubuntu 시스템에는 기본적으로 Qt 라이브러리가 포함되어 있습니다. 앞서 [3. 프로젝트 컴파일](#3프로젝트-컴파일)에서 보았듯이 QtCreator를 설치할 필요 없이 apt-get으로 시스템에 없는 Qt 라이브러리만 설치하면 정상적으로 컴파일할 수 있습니다.

물론 QtCreator를 설치할 때 일부 Qt 라이브러리도 함께 다운로드되지만, 이는 단순히 다운로드일 뿐입니다. 다운로드한 라이브러리를 환경 변수에 추가하지 않으면(보통 시스템 기본 Qt 라이브러리와 추가한 Qt 라이브러리 간의 충돌 문제를 처리해야 하므로 권장하지 않음), QtCreator를 다운로드했더라도 코드 컴파일 시에는 여전히 시스템 기본 라이브러리를 사용합니다.

그렇다면 왜 QtCreator를 추가로 다운로드해야 할까요?

(.ui), (.resource) 파일을 편집하기 위해 QtCreator가 필요하며, QtCreator는 코드 제안, 코드 이동 등의 기능도 제공합니다. 하지만 이러한 기능은 모든 IDE가 가지고 있으며, VSCode/CLion에 플러그인을 설치해도 이러한 기능을 구현할 수 있습니다. 다만 QtCreator가 자사 언어를 더 잘 지원하고 더 편리할 뿐입니다.

이 프로젝트의 모든 인터페이스는 코드에서 수동으로 생성됩니다. mainwindow.ui를 열어보면 아무것도 없는 것을 볼 수 있는데, 이는 모든 인터페이스가 코드로 동적 생성되어 추가되기 때문입니다.

본인의 프로젝트 개발 과정:
 - 시스템 Qt 라이브러리 사용, 필요한 Qt 라이브러리가 없는 경우 apt-get으로 설치
 - 모든 UI 인터페이스는 코드로 동적 생성하여 메인 윈도우에 추가, QtCreator 드래그 앤 드롭 생성 방식 미사용
 - 개발 IDE로 VSCode 사용, 기본 C/C++ 플러그인만 설치하여 코드 제안 기능 사용
 - 리소스 파일(.qrc) 편집이 필요한 경우 수동으로 QtCreator를 열어 qrc 파일 편집 후 저장
 - 컴파일은 터미널에서 make 명령어 사용
 - 실행은 터미널에서 ./ros_qt5_gui_app 명령어 사용

보시다시피 이 프로젝트는 리소스 파일을 편집할 때만 QtCreator가 필요합니다(일반적으로 이미지를 추가한 후에는 자주 편집하지 않음)

본인은 VSCode를 사용하여 개발했지만, QtCreator를 사용하여 개발하는 것을 선호하는 사용자를 위해 QtCreator로 이 프로젝트를 개발하는 방법을 소개하겠습니다:

### 3.1 QtCreator로 프로젝트 열기 튜토리얼

먼저 [3. 프로젝트 컴파일](#3프로젝트-컴파일)에 따라 프로젝트를 성공적으로 컴파일해야 합니다. 컴파일에 실패하면 QtCreator에서 프로젝트가 정상적으로 열리지 않습니다.

이 프로젝트는 표준 CMake 프로젝트이므로 QtCreator에서 CMake 프로젝트를 여는 방식으로 프로젝트 루트 디렉토리의 CMakeLists.txt를 열면 됩니다(ROS1/ROS2 구분 없음)

- 1.安装QtCreator

```
sudo apt-get install qtcreator

```
- 2.打开qtcreator

终端输入(必须终端打开):

```
qtcretor
```
打开后选择文件->打开文件或项目:

![image.png](./doc/images/qtcreator/step1.jpg)

接着选择项目==根目录==下的Cmakelist.txt文件,点击打开即可:

![image.png](./doc/images/qtcreator/step2.jpg)

接着会自动识别我们前面编译的build目录,选择config:

![image.png](./doc/images/qtcreator/step3.jpg)

项目成功展开,点击绿色三角形编译并运行:

![image.png](./doc/images/qtcreator/step4.jpg)

# 四,使用说明

## 4.1,多机通信配置

>💡  针对于ROS新手的温馨提示:此项配置,如果是单机使用即本软件运行在机器人身上,没有跨机器使用就不用配置，直接跳过即可.如果需要将本软件运行在自己的笔记本上,去连接远程的机器人的情况下需要进行配置


ROS1/ROS2的多机通信完全依赖ROS原生(环境变量添加ROS_MASTER_URI与ROS_IP/ROS_DOMAINID),不再由用户手动指定,减轻新手使用负担

ROS1:

配置参考：多机通讯教程[csdn 博客](https://blog.csdn.net/qq_38441692/article/details/98205852)

ROS2:

环境变量多机配置相同的ROS_DOMAINID

## 4.2,配置文件

第一次运行后，会在可执行程序同级目录生成config.json,修改此配置文件即可(需要注意Json格式),修改后重启生效,具体配置说明详见各功能的配置说明


## 4.3,重定位位姿态发布

程序可以拖动式的设置机器人初始位置（重定位）,相对于Rviz,拖动时可以实时查看激光匹配情况,重定位更加精准(左键按住拖动,右键旋转方向)

![image.png](./doc/images/reloc.png)

![image.png](./doc/images/reloc.gif)

注意:如果设置无效,需要检查config.json中设置：

```
{
      "display_name": "Reloc",
      "topic": "/initialpose",
      "enable": true
}
```
为自己机器人监听的重定位Topic名称


## 4.4,地图编辑

程序支持地图编辑功能:

![image.png](./doc/images/edit_map.png)
![image.png](./doc/images/edit_map2.png)

### 4.4.1 拓扑地图(机器人导航点设置)
并且程序支持拓扑地图功能,可以拖动式的设置机器人导航目标点（导航）使用gif说明如下:

![image.png](./doc/images/set_nav_goal.gif)

注意:如果导航点位发布无响应设置无效,需要检查config.json中设置：

```
{
      "display_name": "NavGoal",
      "topic": "/move_base_simple/goal",
      "enable": true
}
```
为自己机器人监听的导航目标点Topic名称

### 4.4.2 橡皮擦

点击橡皮擦后,可以擦除地图中的障碍物,使用gif说明如下:
![image.png](./doc/images/erase.gif)

### 4.4.3 画笔
画笔功能
![image.png](./doc/images/pencil.gif)

### 4.4.4 线段绘制
线段绘制
![image.png](./doc/images/draw_line.gif)

### 4.4.5 地图保存

地图编辑完成后并不会自动保存,需要点击保存按钮,保存地图到指定文件夹,如果需要在ROS中使用，需要将该地图替换到自己对应导航包的map中

目前保存地图有如下:

- *.pgm 图片数据
- *.yaml 地图描述文件
- *.topology 程序自定义的拓扑地图 保存了点位等信息

![image.png](./doc/images/save_map.png)

### 4.4.6 地图加载

地图加载同理 用户选择对应的PGM地图文件即可加载，并进行编辑

## 4.5,手动控制机器人

软件支持发布实时速度到底盘:

![image.png](./doc/images/manual_control.jpg)

对应按钮上的文字，可以由键盘对应按钮同步调用

注意:如果设置无效,需要检查config.json中设置：

```
{
      "display_name": "Speed",
      "topic": "/cmd_vel",
      "enable": true
}

```
为实际机器人监听的速度控制话题

## 4.6,速度仪表盘

软件支持实时显示机器人速度:

![image.png](./doc/images/speed_dashboard.jpg)

注意:如果设置无效,需要检查config.json中设置：

```
{
      "display_name": "Odometry",
      "topic": "/odom",
      "enable": true
}
```

为机器人时机发布的里程计话题

## 4.7,电池电量显示

软件支持实时显示机器人电量,在配置中配置话题名，电池电量的Topic类型为:sensor_msgs::BatteryState

```
{
      "display_name": "Battery",
      "topic": "/battery",
      "enable": true
}
```
![image.png](./doc/images/battery_state.png)

## 4.8 多点连续导航

软件支持多点连续导航,使用方法如下:

![image.png](./doc/images/multi_nav.png)

点击Start Task Chain即可开始任务:

![image.png](./doc/images/main.gif)

## 4.9,相机图片显示

软件支持实时显示机器人相机图片,在配置中配置话题名及location:

```
  "images": [ ], //图片列表 支持多路 配置后自动创建界面

```

软件移植了rqt image view的图片显示功能,支持实时显示多路机器人相机图片,在配置中配置话题名

配置demo:

```

  "images": [
    {
      "location": "front",
      "topic": "/camera/rgb/image_raw",
      "enable": true
    },
    {
      "location": "front/depth",
      "topic": "/camera/depth/image_raw",
      "enable": true
    }
  ],

```

![image.png](./doc/images/show_image.png)

![image.png](./doc/images/show_image.gif)


## 4.10,机器人车身轮廓显示

车身尺寸位于配置:"robot_shape_config":

``` 

  "robot_shape_config": {
    "shaped_points": [],  //轮廓点
    "is_ellipse": false,  //轮廓是否为椭圆
    "color": "0x0000FF",   //轮廓填充颜色
    "opacity": 0.5     //轮廓透明度
  }

```

配置前，首先需要以车中心为原点，使用如下坐标系计算车身轮廓的每个点(单位m)，支持异形车身:

```

                    ^x
                    |
                    |
                    |
          (0.5,0.5) |     (0.5,-0.5)
            +---------------+
            |       |       |
            |       |       |
            |       |       |
<----------------------------------------+
y           |       |       |
            |       |       |
            |       |       |
            |       |       |
            +---------------+
        (-0.5,0.5)  |       (-0.5,-0.5)
                    |
                    |


```

随意找一个点作为起始点,按照顺时针,依次填下每个点

配置demo:

- 1m*1m车身:

```
  "robot_shape_config": {
    "shaped_points": [
      {
        "x": 0.5,
        "y": 0.5
      },
      {
        "x": 0.5,
        "y": -0.5
      },
      {
        "x": -0.5,
        "y": -0.5
      },
      {
        "x": -0.5,
        "y": 0.5
      }
    ],
    "is_ellipse": false,
    "color": "0x00000FF",
    "opacity": 0.5
  }

```

![image.png](./doc/images/shape1.png)

- 1m*1m 圆形车身:

is_ellipse=true

```
  "robot_shape_config": {
    "shaped_points": [
      {
        "x": 0.5,
        "y": 0.5
      },
      {
        "x": 0.5,
        "y": -0.5
      },
      {
        "x": -0.5,
        "y": -0.5
      },
      {
        "x": -0.5,
        "y": 0.5
      }
    ],
    "is_ellipse": true,
    "color": "0x00000FF",
    "opacity": 0.5
  }

```
![image.png](./doc/images/shape_cicle.png)

- 异形车身:
  
```
  "robot_shape_config": {
    "shaped_points": [
      {
        "x": 0.5,
        "y": 0.5
      },
      {
        "x": 1,
        "y": 0
      },
      {
        "x": 0.5,
        "y": -0.5
      },
      {
        "x": -0.5,
        "y": -0.5
      },
      {
        "x": -0.5,
        "y": 0.5
      }
    ],
    "is_ellipse": false,
    "color": "0x00000FF",
    "opacity": 0.5
  }

```

![image.png](./doc/images/shape2.png)

# 五,相关链接


| 链接名                                                                             | 支持平台                  | 功能                                                                                                   |
| ---------------------------------------------------------------------------------- | ------------------------- | ------------------------------------------------------------------------------------------------------ |
| [master](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/master)               | Win10 Ubuntu              | ROS + QWidget + QGraphicsview自绘制可视化界面显示                                                      |
| [qml_hmi](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/qml_hmi)             | Win10 Ubuntu              | ROS + QML + C++混合编程，qml自绘制地图，激光雷达可视化显示等demo                                       |
| [simple](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/simple)               | Win10 Ubuntu              | ROS + QWidget + Librviz进行可视化显示，为《ROS人机交互软件开发》系列课程中实现的版本，CSDN博客例程版本 |
| [rviz_tree](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/rviz_tree)         | Win10 Ubuntu              | ROS + QWidget + Librviz原生图层Api实现图层管理，不需手动创建图层                                       |
| [ros_qt_demo](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/ros_qt_demo)     | Win10 Ubuntu              | cakin_create_qt_pkg 创建的原始包，cmakelist.txt已配置好改为qt5，可以直接编译运行                       |
| [ros2_qt_demo](https://github.com/chengyangkj/ros2_qt_demo)                        | ROS2                      | 在ROS2平台上运行的qt demo包，cmakelist.txt已配置好改为qt5，可以直接colcon build 编译使用               |
| [ROS2_Qt5_Gui_App](https://github.com/chengyangkj/ROS2_Qt5_Gui_App)                | ROS2                      | 与本仓库代码完全相同/停止维护                                                                          |
| [Flutter App](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/ros_flutter_app) | 基于flutter实现多平台运行 | 逐步推进.....                                                                                          |


# 六,相关教程及交流群

 **本系列教程文章专栏:**

[ROS机器人GUI程序开发](https://blog.csdn.net/qq_38441692/category_9863968.html)
[ROS2 Qt21天训练营(关注古月学院,不定期开营)](https://class.guyuehome.com/)
 **本系列课程已上线古月学院，欢迎感兴趣的小伙伴订阅：**

 1. [ROS Qt开发环境搭建以及基础知识介绍](https://class.guyuehome.com/detail/p_5eba414d58533_Uh4XTbPi/6)
 2. [ROS人机交互软件的界面开发](https://class.guyuehome.com/detail/p_5ec490a8d7bd7_b7ucPqUs/6)
 3. [ROS Rviz组件开发方法](https://class.guyuehome.com/detail/p_5edf2d27a1942_foy4nqci/6)
 4. [如何实现ROS windows人机交互软件](https://class.guyuehome.com/detail/p_5fc5ab97e4b04db7c091f475/6)
 
![在这里插入图片描述](https://img-blog.csdnimg.cn/20200612194143186.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM4NDQxNjky,size_16,color_FFFFFF,t_70)

**开发交流QQ群：** 797497206
