package("legacyparticleapi")
    add_urls("https://github.com/LiteLDev/LegacyParticleAPI/releases/download/v$(version)/LegacyParticleAPI-windows-x64.zip")
    add_versions("0.2.0", "b0b33943c4c451240d8a4853c11e3cd1e8c48784cd69cb9fa98929d1547b55ac")
    add_versions("0.3.0", "1ad52812d10e39d2606b1f6114989ad20c573e90c550725922b97445648929ff")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
