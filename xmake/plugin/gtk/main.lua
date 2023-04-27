import("core.base.option")
function main()
    local target = option.get("tar")
    local res_file = option.get("res")
    local script_dir = target:scriptdir()
    local res_full_path = script_dir..res_file
    if not os.exists(res_full_path) then
        raise("error: "..res_file.." is not exist")
        return
    end
    res_path = path.directory(res_full_path)
    os.cd(res_path)
    os.exec(string.format("glib-compile-resources %s --target=resources.c --generate-source", path.filename(res_full_path)))
    target:add("files", res_path.."/resources.c")
end
