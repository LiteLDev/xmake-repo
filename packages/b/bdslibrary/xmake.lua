package("bdslibrary")
    set_description("The bdslibrary package")

    add_urls("https://github.com/LiteLDev/BDSLibrary/releases/download/$(version)/bdslibrary-$(version)-windows-amd64.zip")
    add_versions("1.19.63.01", "b19cbbb3de1970bd607c019729b37f886aba3b57278f3139234556393df6326d")

    on_install(function (package)
        os.cp("*.lib", package:installdir("lib"))
    end)
