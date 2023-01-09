@echo off
@REM "标准项目配置："
@REM "++++++++++++++++++++++++"
@REM "* 构建Game"
@REM "* 构建Client"
@REM "=============================="
@REM "* 第三方库：Profile"
@REM "* MSVC边线程编译核心数：自动"

@REM "-------------------------"
@REM "关闭"
@REM "* 构建Test：OFF"


@REM "生成目录：build-fast"
cmake ../../.. B ../../../build-with-game -G"visual Studio 16 2019" -DTHIRD_PARTH_CFG=Profile -DBUILD_GAME=ON -DCONAN_SERVER="conan.xxx.com" -DGAME_NAME="proven_ground"

pause
