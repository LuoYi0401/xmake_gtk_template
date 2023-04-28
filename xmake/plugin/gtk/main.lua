import("core.base.option")
function main()
    local target = option.get("target")
    local res_file = option.get("resfile")
    local res_full_path = path.join(target:scriptdir(), res_file)
    local gen_target_dir = path.join("$(projectdir)", "gen" , target:name())
    local glib_compiled_resources_path = path.join(gen_target_dir, "resources.c")

    if not os.exists(gen_target_dir) then
        os.mkdir(gen_target_dir)
    end

    if not os.exists(res_full_path) then
        raise("error: "..res_full_path.." is not exist")
        return
    end
    -- 似乎必须在resources.xml文件目录下才能使glib编译资源
    os.cd(path.directory(res_full_path))
    print("[glib compile resources]-[WARNNING]:这个编译操作会被多次执行")
    os.exec(string.format("glib-compile-resources %s --target=%s --generate-source", path.filename(res_full_path), glib_compiled_resources_path))
    target:add("files", glib_compiled_resources_path)
end
