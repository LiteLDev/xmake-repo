package("demangler")
    set_description("The demangler package")

    add_urls("https://github.com/LiteLDev/Demangler.git")

    add_versions("v1.0.2", "6218c355e07abc197862fc2c8c3d9eeea8462c75")
    add_versions("v2.0.0", "88865df2816654aa5e61d1646f69e02c97cd60b0")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
