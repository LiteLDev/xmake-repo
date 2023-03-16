package("demangler")
    set_description("The demangler package")

    add_urls("https://github.com/LiteLDev/Demangler.git")
    add_versions("v1.0.1", "f04f91dcc2cf2d6cc9e744896cb24ea03db12b13")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
