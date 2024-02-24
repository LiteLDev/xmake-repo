package("legacyparticleapi")
    add_urls("https://github.com/LiteLDev/LegacyParticleAPI/releases/download/v$(version)/LegacyParticleAPI-windows-x64.zip")
    add_versions("0.3.0", "1ad52812d10e39d2606b1f6114989ad20c573e90c550725922b97445648929ff")
    add_versions("0.4.0", "88e22e46610776c9791fe83a976722b7629891776d2662535a13424c1a0bd3d8")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
