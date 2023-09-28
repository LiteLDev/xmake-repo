package("symbolprovider")
    set_description("The symbolprovider package")

    add_urls("https://github.com/LiteLDev/SymbolProvider.git")
    add_versions("v1.1.0", "cf33ca9cc7f4155cce0dcde40c3672f665653705")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
