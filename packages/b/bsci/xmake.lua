package("bsci")
    add_urls("https://github.com/OEOTYAN/BedrockServerClientInterface.git")
    add_versions("0.1.0", "bde86a823bc3c191e65a5139551de0d2cb4a0b90")
    add_versions("0.1.1", "29f0adee9f5cc58cf0e9f818ac04bcb5ec0d5dc1")

    add_deps("levilamina")
    on_install(function (package)
        import("package.tools.xmake").install(package)
    end)
