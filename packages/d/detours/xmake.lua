package("detours")
    set_description("The detours package")

    add_urls("https://github.com/LiteLDev/DetoursXMake.git")
    add_versions("v4.0.1", "9a0c7fcf493baec541dfb906f9f5fd4591d2bae9")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
