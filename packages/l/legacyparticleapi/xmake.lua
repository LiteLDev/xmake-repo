package("legacyparticleapi")
    add_urls("https://github.com/LiteLDev/LegacyParticleAPI/releases/download/v$(version)/LegacyParticleAPI-windows-x64.zip")
    add_versions("0.1.1", "5e9fb32ac4c6284387bc93a1e10ceebb863824cd421a3fde4916a8652d4a7930")
    add_versions("0.2.0", "b0b33943c4c451240d8a4853c11e3cd1e8c48784cd69cb9fa98929d1547b55ac")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
