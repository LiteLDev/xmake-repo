package("legacyparticleapi")
    add_urls("https://github.com/LiteLDev/LegacyParticleAPI/releases/download/v$(version)/LegacyParticleAPI-windows-x64.zip")
    add_versions("0.1.1", "5e9fb32ac4c6284387bc93a1e10ceebb863824cd421a3fde4916a8652d4a7930")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
