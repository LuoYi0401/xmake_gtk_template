-- 添加依赖，我使用的环境是msys2中的mingw64，这里会调用pkg-config来查找头文件等
add_requires("pacman::gtk4", {alias = "gtk4"})
-- 如果使用linux系统，如下,system用指示强制使用系统库，注意第一个引号中的内容将直接用于pkg-config查找，请根据实际情况修改
-- add_requires("gtk4.0", {alias = "gtk4", system = true})
-- 使用动态库已在顶层xmake文件中有配置，如果每个target使用不同的配置，可以使用如下配置
-- add_requires("gtk4.0", {alias = "gtk4", system = true, config = {shared = true}})

target("gtk4_example", function()
    on_load(function(target)
        import("core.project.task")
        task.run("gtk", {target=target, resfile="res/org.ly.gtk4_example.gresources.xml"})
    end)
    set_kind("binary")
    add_includedirs("include")
    add_files("src/*.c")
    add_packages("gtk4")
end)