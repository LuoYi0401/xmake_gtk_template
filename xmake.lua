set_project("project_name")
set_version("0.0.0")

-- 设置xmake最低版本
-- set_xmakever("2.5.6")

-- set_allowedplats("mingw")

add_rules("mode.debug", "mode.release")
-- 设置将第三方库以动态库的形式链接
add_requireconfs("*", {configs = {shared = true}})
-- 设置使用xmake构建之后自动更新compile_commands.json文件
add_rules("plugin.compile_commands.autoupdate", {outputdir = "./"})
add_rules("mode.debug", "mode.release")
-- 设置exe、dll等target产物的输出目录
set_targetdir("release")
-- 添加xmake插件目录
add_plugindirs("xmake/plugin")

set_languages("c11")
set_optimize("faster")

-- 添加子项目文件夹
includes("gtk4_example")
