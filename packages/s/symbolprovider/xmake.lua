package("symbolprovider")
    set_description("The symbolprovider package")

    add_urls("https://github.com/LiteLDev/SymbolProvider.git")
    add_versions("v1.0.0", "7fb47a05c84c4e7e688c43fe8419cc4bd693332f")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
