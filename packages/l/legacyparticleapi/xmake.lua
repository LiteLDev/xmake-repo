package("LegacyParticleAPI")
    add_urls("https://github.com/LiteLDev/LegacyParticleAPI/releases/download/v$(version)/LegacyParticleAPI-windows-x64.zip")
    add_versions("0.1.0", "922e2f805ee91a12cbd9d96227c0a8db805d10ab8fb17e7f42ce898f058c9ccc")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
