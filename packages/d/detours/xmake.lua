package("detours")
    set_description("The detours package")

    add_urls("https://github.com/LiteLDev/DetoursXMake.git")
    add_versions("v4.0.1-xmake.0", "76c05a37e40116d708ca33fb48e572c4e69a3498")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
