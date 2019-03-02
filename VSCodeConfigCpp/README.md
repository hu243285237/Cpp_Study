# VSCode配置C++环境

1.下载VSCode并安装：

https://code.visualstudio.com/

2.点击左侧Extensions选项，搜索C/C++并下载安装

![ScreenShot](https://github.com/hu243285237/Cpp_Study/blob/master/VSCodeConfigCpp/ScreenShot/ScreenShot01.png)

3.下载C/C++的编译环境MinGW并安装：

https://osdn.net/projects/mingw/releases/

（网站有时会上不去，我为了世界的和平已把它上传Github）

![ScreenShot](https://github.com/hu243285237/Cpp_Study/blob/master/VSCodeConfigCpp/ScreenShot/ScreenShot02.png)

4.安装完毕后会自动打开个MinGW Installation Manager的玩意

我们只需勾选三处（其实勾一个地方会自动选择其他好几项）

"All Packages/MinGW/MinGW Base System"里面的mingw32-gdb-bin

"All Packages/MinGW/MinGW Base System/MinGW Compiler Suite"里面的mingw32-gcc-bin

"All Packages/MinGW/MinGW Base System/MinGW Compiler Suite"里面的mingw32-gcc-g++-bin

![ScreenShot](https://github.com/hu243285237/Cpp_Study/blob/master/VSCodeConfigCpp/ScreenShot/ScreenShot03.png)

![ScreenShot](https://github.com/hu243285237/Cpp_Study/blob/master/VSCodeConfigCpp/ScreenShot/ScreenShot04.png)

5.然后点击左上角的"Installation/Apply Changes"，点击Apply，等待安装完成

6.配置环境变量（注意我MinGW是装在D盘）

![ScreenShot](https://github.com/hu243285237/Cpp_Study/blob/master/VSCodeConfigCpp/ScreenShot/ScreenShot05.png)

（配置完成后可以在cmd用"gcc -v"或者"g++ -v"检查是否配置成功）

7.到现在为止电脑的环境都已配置好了，现在还差工程的配置

在桌面新建一个文件夹，然后用VSCode打开这个文件夹，然后创建一个简单的cpp文件，命名为test.cpp

![ScreenShot](https://github.com/hu243285237/Cpp_Study/blob/master/VSCodeConfigCpp/ScreenShot/ScreenShot06.png)

8.点击VSCode上方的"Terminal/New Terminal"，设置以cmd启动，输入以下指令即可运行程序

g++ test.cpp -o myTestExe

.\myTestExe

即可看到输出结果

![ScreenShot](https://github.com/hu243285237/Cpp_Study/blob/master/VSCodeConfigCpp/ScreenShot/ScreenShot07.png)

9.到上一步已经结束，如果出现引用找不到之类的情况，把这个c_cpp_properties.json文件（在本Github找）创建或者覆盖到.vscode文件夹里，注意路径，我MinGW是安装在D盘

![ScreenShot](https://github.com/hu243285237/Cpp_Study/blob/master/VSCodeConfigCpp/ScreenShot/ScreenShot08.png)
