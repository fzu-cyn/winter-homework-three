@echo off
echo 请输入文件所在位置
set /p var=
echo 请输入文件名
set /p var1=
echo 开始编译代码
C:\Users\陈玉娜\Desktop\c++寒假作业\寒假作业3\编译脚本\汉字运算.cpp
if exist "C:\Users\陈玉娜\Desktop\c++寒假作业\寒假作业3\编译脚本\汉字运算.exe" echo 编译成功
if not exist "C:\Users\陈玉娜\Desktop\c++寒假作业\寒假作业3\编译脚本\汉字运算.exe" echo 编译失败
pause