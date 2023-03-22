package("symbolprovider")
    set_description("The symbolprovider package")

    add_urls("https://github.com/LiteLDev/SymbolProvider.git")
    add_versions("v1.0.1", "8eccdf9edd43325545db1c2ce88c812e3904ff26")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
