package("legacymoney")
    add_urls("https://github.com/LiteLDev/LegacyMoney/releases/download/v$(version)/LegacyMoney-windows-x64.zip")
    add_versions("0.2.0", "7fae21ee201b72f860ce37cafa5c78439747eddf7d9162c66d77150cf081dd68")
    add_versions("0.3.0", "ce08d7524668a88a17645c87ced8ea15ca140b282e4c17db9035a3e875804240")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
