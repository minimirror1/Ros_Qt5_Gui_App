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

기능/TODO:배포 비디오

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

*프로젝트 스크린샷*

![image.png](./doc/images/main.png)
 
![image.png](./doc/images/main.gif)

![mapping.png](./doc/images/mapping.gif)

플러터 기반의 ROS1/ROS2 크로스 플랫폼 모바일 로봇 인간-기계 상호작용 소프트웨어가 공식적으로 오픈 소스되었습니다:
![flutter.png](./doc/images/flutter.png)
필요하신 경우 [ROS_Flutter_Gui_App](https://github.com/chengyangkj/ROS_Flutter_Gui_App)로 이동해 주시기 바랍니다.

*목차*

<!-- TOC -->

- [1,릴리스 버전 다운로드 및 사용](#1-release-버전-다운로드-및-사용)
- [2,컴파일](#2-컴파일)
  - [1,환경 설치](#1-환경-설치)
  - [2,프로젝트 클론/다운로드](#2-프로젝트-클론다운로드)
  - [3,프로젝트 컴파일](#3-프로젝트-컴파일)
  - [4,프로젝트 실행](#4-프로젝트-실행)
- [3,IDE 설정 설명(QtCreator/Vscode)](#3-ide-설정-설명qtcreatorvscode)
    - [3.1 QtCreator로 프로젝트 열기 튜토리얼](#31-qtcreator로-프로젝트-열기-튜토리얼)
- [4,사용 설명](#4-사용-설명)
  - [4.1,다중 기기 통신 설정](#41-다중-머신-통신-설정)
  - [4.2,설정 파일](#42-설정-파일)
  - [4.3,재위치 자세 발행](#43-위치-재설정-발행)
  - [4.4,지도 편집](#44-지도-편집)
    - [4.4.1 토폴로지 맵(로봇 내비게이션 포인트 설정)](#441-토폴로지-맵로봇-내비게이션-지점-설정)
    - [4.4.2 지우개](#442-지우개)
    - [4.4.3 펜](#443-펜)
    - [4.4.4 선 그리기](#444-선-그리기)
    - [4.4.5 지도 저장](#445-지도-저장)
    - [4.4.6 지도 불러오기](#446-지도-불러오기)
  - [4.5,로봇 수동 제어](#45-로봇-수동-제어)
  - [4.6,속도 대시보드](#46-속도-대시보드)
  - [4.7,배터리 잔량 표시](#47-배터리-잔량-표시)
  - [4.8 다중 지점 연속 내비게이션](#48-다중-지점-연속-내비게이션)
  - [4.9,카메라 이미지 표시](#49-카메라-이미지-표시)
  - [4.10,로봇 차체 윤곽 표시](#410-로봇-차체-윤곽-표시)
- [5,관련 링크](#5-관련-링크)
- [6,관련 튜토리얼 및 교류 그룹](#6-관련-튜토리얼-및-교류-그룹)

<!-- /TOC -->

# 1, Release 버전 다운로드 및 사용

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


>💡 참고: 이 프로젝트가 ROS1과 ROS2를 동시에 지원하기 위해, ROS1/ROS2의 catkin_make/colcon 빌드 시스템을 사용하지 않고 표준 CMake를 사용하여 빌드합니다. 이는 이 프로젝트가 ROS에 의해 자동으로 패키지로 인식되지 않는다는 것을 의미합니다.

[bilibili 튜토리얼](https://www.bilibili.com/video/BV1ex4y1a7or/?vd_source=75c00cfe4b6a37d574e447ad1e864d29)

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

- 1. QtCreator 설치

```
sudo apt-get install qtcreator
```

- 2. QtCreator 실행

터미널에서 입력(반드시 터미널에서 열어야 함):

```
qtcretor
```
열기 후 파일->파일 또는 프로젝트 열기 선택:

![image.png](./doc/images/qtcreator/step1.jpg)

그 다음 프로젝트 ==루트 디렉토리==의 CMakeLists.txt 파일을 선택하고 열기를 클릭하면 됩니다:

![image.png](./doc/images/qtcreator/step2.jpg)

그러면 이전에 컴파일한 build 디렉토리를 자동으로 인식하고 config를 선택합니다:

![image.png](./doc/images/qtcreator/step3.jpg)

프로젝트가 성공적으로 열리면 녹색 삼각형을 클릭하여 컴파일 및 실행합니다:

![image.png](./doc/images/qtcreator/step4.jpg)

# 4. 사용 설명

## 4.1, 다중 머신 통신 설정

>💡 ROS 초보자를 위한 팁: 이 설정은 소프트웨어가 로봇에서 단독으로 실행되는 경우, 즉 다른 머신과의 통신이 필요 없는 경우에는 설정할 필요가 없으며 건너뛰어도 됩니다. 노트북에서 이 소프트웨어를 실행하여 원격 로봇에 연결하려는 경우에만 설정이 필요합니다.

ROS1/ROS2의 다중 머신 통신은 ROS 네이티브 환경 변수(ROS_MASTER_URI와 ROS_IP/ROS_DOMAINID)에 전적으로 의존하며, 사용자가 수동으로 지정할 필요가 없어 초보자의 부담을 줄였습니다.

ROS1:

설정 참조: 다중 머신 통신 튜토리얼 [csdn 블로그](https://blog.csdn.net/qq_38441692/article/details/98205852)

ROS2:

환경 변수에서 동일한 ROS_DOMAINID 설정

## 4.2, 설정 파일

첫 실행 후 실행 파일과 동일한 디렉토리에 config.json이 생성됩니다. 이 설정 파일을 수정하면 됩니다(JSON 형식에 주의). 수정 후 재시작하면 적용되며, 자세한 설정 설명은 각 기능의 설정 설명을 참조하세요.

## 4.3, 위치 재설정 발행

프로그램에서는 드래그 방식으로 로봇의 초기 위치를 설정(재위치)할 수 있습니다. Rviz와 비교하여 드래그할 때 레이저 매칭 상태를 실시간으로 확인할 수 있어 더 정확한 위치 재설정이 가능합니다(왼쪽 버튼을 누른 채 드래그하고, 오른쪽 버튼으로 방향 회전).

![image.png](./doc/images/reloc.png)

![image.png](./doc/images/reloc.gif)


주의: 설정이 무효인 경우, config.json의 설정을 확인해야 합니다:

```
{
      "display_name": "Reloc",
      "topic": "/initialpose",
      "enable": true
}
```
자신의 로봇이 수신하는 재위치 Topic 이름으로 설정


## 4.4, 지도 편집

프로그램은 지도 편집 기능을 지원합니다:

![image.png](./doc/images/edit_map.png)
![image.png](./doc/images/edit_map2.png)

### 4.4.1 토폴로지 맵(로봇 내비게이션 지점 설정)
프로그램은 토폴로지 맵 기능을 지원하며, 드래그 방식으로 로봇의 내비게이션 목표 지점을 설정할 수 있습니다(내비게이션). 아래 GIF로 설명합니다:

![image.png](./doc/images/set_nav_goal.gif)

주의: 내비게이션 지점 발행이 응답하지 않거나 설정이 무효인 경우, config.json의 설정을 확인해야 합니다:

```
{
      "display_name": "NavGoal",
      "topic": "/move_base_simple/goal",
      "enable": true
}
```
자신의 로봇이 수신하는 내비게이션 목표 지점 Topic 이름으로 설정

### 4.4.2 지우개

지우개를 클릭하면 지도의 장애물을 지울 수 있습니다. GIF로 설명하면 다음과 같습니다:
![image.png](./doc/images/erase.gif)

### 4.4.3 펜
펜 기능
![image.png](./doc/images/pencil.gif)

### 4.4.4 선 그리기
선 그리기
![image.png](./doc/images/draw_line.gif)

### 4.4.5 지도 저장

지도 편집이 완료되어도 자동으로 저장되지 않으므로, 저장 버튼을 클릭하여 지정된 폴더에 저장해야 합니다. ROS에서 사용하려면 해당 지도를 자신의 내비게이션 패키지의 map으로 교체해야 합니다.

현재 저장되는 지도 파일은 다음과 같습니다:

- *.pgm 이미지 데이터
- *.yaml 지도 설명 파일
- *.topology 프로그램 사용자 정의 토폴로지 맵(위치 정보 등 저장)

![image.png](./doc/images/save_map.png)

### 4.4.6 지도 불러오기

지도 불러오기도 마찬가지로 사용자가 해당 PGM 지도 파일을 선택하면 불러와서 편집할 수 있습니다.

## 4.5, 로봇 수동 제어

소프트웨어는 실시간 속도를 로봇 베이스로 발행할 수 있습니다:

![image.png](./doc/images/manual_control.jpg)

버튼의 텍스트에 해당하는 키보드 버튼으로도 동시에 제어할 수 있습니다.

주의: 설정이 무효인 경우 config.json의 설정을 확인해야 합니다:

```
{
      "display_name": "Speed",
      "topic": "/cmd_vel",
      "enable": true
}

```
실제 로봇이 수신하는 속도 제어 Topic 이름으로 설정

## 4.6, 속도 대시보드

소프트웨어는 로봇의 속도를 실시간으로 표시할 수 있습니다:

![image.png](./doc/images/speed_dashboard.jpg)

주의: 설정이 무효인 경우 config.json의 설정을 확인해야 합니다:

```
{
      "display_name": "Odometry",
      "topic": "/odom",
      "enable": true
}
```

로봇이 발행하는 오도메트리 토픽으로 설정

## 4.7, 배터리 잔량 표시

소프트웨어는 로봇의 배터리 잔량을 실시간으로 표시할 수 있습니다. 설정에서 토픽 이름을 설정하면 되며, 배터리 잔량 토픽 타입은 sensor_msgs::BatteryState입니다.

```
{
      "display_name": "Battery",
      "topic": "/battery",
      "enable": true
}
```
![image.png](./doc/images/battery_state.png)

## 4.8 다중 지점 연속 내비게이션

소프트웨어는 다중 지점 연속 내비게이션을 지원하며, 사용 방법은 다음과 같습니다:

![image.png](./doc/images/multi_nav.png)

Start Task Chain을 클릭하면 작업이 시작됩니다:

![image.png](./doc/images/main.gif)

## 4.9 카메라 이미지 표시

소프트웨어는 로봇 카메라 이미지를 실시간으로 표시할 수 있으며, 설정에서 토픽 이름과 위치를 설정하면 됩니다:

```
  "images": [ ], //이미지 목록 - 다중 채널 지원, 설정 후 자동으로 인터페이스 생성

```

소프트웨어는 rqt image view의 이미지 표시 기능을 이식했으며, 다중 로봇 카메라 이미지를 실시간으로 표시할 수 있습니다. 설정에서 토픽 이름을 구성하면 됩니다.

설정 예시:

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


## 4.10, 로봇 차체 윤곽 표시

차체 크기는 설정의 "robot_shape_config"에 있습니다:

``` 
  "robot_shape_config": {
    "shaped_points": [],  //윤곽점
    "is_ellipse": false,  //윤곽이 타원인지 여부
    "color": "0x0000FF",   //윤곽 채우기 색상
    "opacity": 0.5     //윤곽 투명도
  }
```

설정하기 전에 먼저 차량 중심을 원점으로 하여 다음과 같은 좌표계를 사용하여 차체 윤곽의 각 점을 계산해야 합니다(단위: m). 비정형 차체도 지원됩니다:

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

임의의 점을 시작점으로 선택하고, 시계 방향으로 각 점을 순서대로 입력합니다.

설정 예시:

- 1m*1m 차체:

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

- 1m*1m 원형 차체:

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

- 비정형 차체:
  
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

# 5,관련 링크


| 링크명                                                                             | 지원 플랫폼                | 기능                                                                                                   |
| ---------------------------------------------------------------------------------- | ------------------------- | ------------------------------------------------------------------------------------------------------ |
| [master](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/master)               | Win10 Ubuntu              | ROS + QWidget + QGraphicsview 자체 구현 시각화 인터페이스 표시                                          |
| [qml_hmi](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/qml_hmi)             | Win10 Ubuntu              | ROS + QML + C++ 혼합 프로그래밍, qml 자체 구현 지도, 라이다 시각화 표시 등 데모                         |
| [simple](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/simple)               | Win10 Ubuntu              | ROS + QWidget + Librviz 시각화 표시, 'ROS 인간-기계 상호작용 소프트웨어 개발' 시리즈 강좌 구현 버전, CSDN 블로그 예제 버전 |
| [rviz_tree](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/rviz_tree)         | Win10 Ubuntu              | ROS + QWidget + Librviz 네이티브 레이어 API로 레이어 관리 구현, 수동 레이어 생성 불필요                  |
| [ros_qt_demo](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/ros_qt_demo)     | Win10 Ubuntu              | cakin_create_qt_pkg로 생성된 원본 패키지, cmakelist.txt가 qt5로 설정되어 있어 바로 컴파일 실행 가능      |
| [ros2_qt_demo](https://github.com/chengyangkj/ros2_qt_demo)                        | ROS2                      | ROS2 플랫폼에서 실행되는 qt 데모 패키지, cmakelist.txt가 qt5로 설정되어 있어 colcon build로 바로 컴파일 사용 가능 |
| [ROS2_Qt5_Gui_App](https://github.com/chengyangkj/ROS2_Qt5_Gui_App)                | ROS2                      | 이 저장소 코드와 완전히 동일/유지보수 중단                                                               |
| [Flutter App](https://github.com/chengyangkj/Ros_Qt5_Gui_App/tree/ros_flutter_app) | Flutter 기반 멀티플랫폼 실행 | 점진적으로 진행 중.....                                                                                |


# 6. 관련 튜토리얼 및 커뮤니티

**본 시리즈 튜토리얼 전문 칼럼:**

[ROS 로봇 GUI 프로그램 개발](https://blog.csdn.net/qq_38441692/category_9863968.html)
[ROS2 Qt 21일 트레이닝 캠프(고월학원 팔로우, 비정기 개강)](https://class.guyuehome.com/)
**본 시리즈 강좌가 고월학원에 업로드되었습니다. 관심 있는 분들의 구독을 환영합니다:**

1. [ROS Qt 개발 환경 구축 및 기초 지식 소개](https://class.guyuehome.com/detail/p_5eba414d58533_Uh4XTbPi/6)
2. [ROS 인간-기계 상호작용 소프트웨어의 인터페이스 개발](https://class.guyuehome.com/detail/p_5ec490a8d7bd7_b7ucPqUs/6)
3. [ROS Rviz 컴포넌트 개발 방법](https://class.guyuehome.com/detail/p_5edf2d27a1942_foy4nqci/6)
4. [ROS Windows 인간-기계 상호작용 소프트웨어 구현 방법](https://class.guyuehome.com/detail/p_5fc5ab97e4b04db7c091f475/6)

![이미지 설명](https://img-blog.csdnimg.cn/20200612194143186.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM4NDQxNjky,size_16,color_FFFFFF,t_70)

**개발 커뮤니티 QQ 그룹:** 797497206
