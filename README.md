Getting Started with Qt
=========
This repository contains a gentle introduction to getting started with Qt 5 (primarily on Mac OS X).

Installation (on Mac OS X)
--------------
```sh
git clone https://github.com/maddyonline/qt-experiments.git
cd qt-experiments/
echo "Just trying some git sanity check commands"
git status
git branch -a
git pull
git push
cd ..
mkdir build-qt-experiments
export PATH=/Users/"your-username"/Qt/5.3/clang_64/bin:$PATH
qmake ../qt-experiments/SecondApp.pro
make
open SecondApp.app
```

Building/Testing on Windows
--------------

Building (and testing) Qt application on windows (while developing on Mac OS X). 
  - Download and install [VirtualBox] on Mac OS X.
  - Download .ova file for Windows image currently freely available from [Windows VM Page].
  - Start VirtualBox and select File->Import Appliance and choose the .ova file downloaded above. This will install a windows virtual machine.
  - Download and install [Qt for Windows] from the binary installer on the windows VM.
  - Download and install [Git for Windows] on the windows VM.
  - Checkout git code for the Qt application.
  - Open Qt creator in Windows VM and open the application.pro file in it.
  - Build and Run.

Screenshot
--------------
![alt text](https://raw.githubusercontent.com/maddyonline/qt-experiments/master/screenshots/screenshot.png "Don't ask why it's called Second App")

[Git for Windows]:http://msysgit.github.io
[Qt for Windows]:http://qt-project.org/downloads
[Windows VM Page]:https://www.modern.ie/en-us/virtualization-tools
[VirtualBox]:https://www.virtualbox.org/wiki/Downloads