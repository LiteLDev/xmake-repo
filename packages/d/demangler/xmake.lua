package("demangler")
    set_description("The demangler package")

    add_urls("https://github.com/LiteLDev/Demangler.git")
    add_versions("v1.0.0", "5e64364ab8a1b9b8235b7ac159fc271a0e3f810d")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
