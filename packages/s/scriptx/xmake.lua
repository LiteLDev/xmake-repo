package("scriptx")
    add_urls("https://github.com/LiteLDev/prebuilt-scriptx/releases/download/$(version)/scriptx-windows-amd64.zip")
    add_versions("v0.1.0", "1ac7f92cd9597c44b37e84d315adfb30915602e03d8e2e93d22578af8f8589dc")

    on_install(function (package)
        os.cp("include/*", package:installdir("include", "scriptx"))
        os.cp("lib/*", package:installdir("lib"))
    end)
