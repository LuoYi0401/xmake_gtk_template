task("gtk")
    set_category("plugin")
    on_run("main")
    set_menu {
        usage = "xmake gtk target gresource.xml",
        description = "gtk application project, compile resource and add to target",
        options =
        {
            -- {简称, 参数名，参数类型， 默认值， 说明}
            {'t', "tar", "kv", nil, "build target"},
            {'r', "res", "vs", "./gresource.xml", "gresource.xml file"}
        }
    }