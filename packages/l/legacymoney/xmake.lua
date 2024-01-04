package("legacymoney")
    add_urls("https://github.com/LiteLDev/LegacyMoney/releases/download/v$(version)/LegacyMoney-windows-x64.zip")
    add_versions("0.1.0", "ea33c23bc116cec686fbae3187c3fecece0c1dd8b208cdeef3b101b5a5fdc412")
    add_versions("0.1.2", "08d86510ad41411a365a0c4bd65fce96aae3455dbc408703d57a9752d0c9552e")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
