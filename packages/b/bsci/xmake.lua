package("bsci")
    add_urls("https://github.com/OEOTYAN/BedrockServerClientInterface.git")
    add_versions("0.1.3", "09b93fe157be697ba84a2cbec242454e9290b67c")
    add_versions("0.1.4", "f3fbbdca5df9c10b6c8f1276a7e0ee03497ad098")

    add_deps("levilamina")
    on_install(function (package)
        import("package.tools.xmake").install(package)
    end)
