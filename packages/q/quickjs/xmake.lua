package("quickjs")
    add_urls("https://github.com/LiteLDev/quickjs/releases/download/2022-03-07/quickjs-win-x86_64.zip")
    add_versions("2022-03-07", "af0c38b0cf80aa1deb58e727e408477fffcc6f5f57da537dffc335861d652ed0")

    on_install(function (package)
        os.cp("*", package:installdir())
    end)
