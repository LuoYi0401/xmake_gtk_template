#! /bin/bash

#if [ ! -d "./.xmake" ]; then
  xmake f -p mingw -a x86_64 -m dbug -v
#fi
xmake -v
# compile_commands.json文件已通过xmake插件自动更新，首次生成仍需要手动调用以下命令
if [ ! -f "./CMakeLists.txt" ]; then
  echo "create compile_commands"
  xmake project -k compile_commands
fi
echo "create cmake_lists.txt"
xmake project -k cmake
