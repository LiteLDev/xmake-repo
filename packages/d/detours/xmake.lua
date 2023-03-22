package("detours")
    set_description("The detours package")

    add_urls("https://github.com/LiteLDev/DetoursXMake.git")
    add_versions("v4.0.1-xmake.1", "a3575450d63deecaf22628e056fbf93f4f95edff")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
