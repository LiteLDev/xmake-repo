package("legacymoney")
    add_urls("https://github.com/LiteLDev/LegacyMoney/releases/download/v$(version)/LegacyMoney-windows-x64.zip")
    add_versions("0.1.5", "cd61ae85c87ca8fc22379e2f171a1d35a34b3f684aea4540a1108aec6d39094e")
    add_versions("0.2.0", "7fae21ee201b72f860ce37cafa5c78439747eddf7d9162c66d77150cf081dd68")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
