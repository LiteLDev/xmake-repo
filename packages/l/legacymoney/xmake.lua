package("legacymoney")
    add_urls("https://github.com/LiteLDev/LegacyMoney/releases/download/v$(version)/LegacyMoney-windows-x64.zip")
    add_versions("0.3.0", "ce08d7524668a88a17645c87ced8ea15ca140b282e4c17db9035a3e875804240")
    add_versions("0.4.0", "f1a0fd84166a80c5082375203536a099da1e5204dfb3d20b1917c66f0c6bab58")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
