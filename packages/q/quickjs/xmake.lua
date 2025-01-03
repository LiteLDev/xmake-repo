package("quickjs")
    add_urls("https://github.com/LiteLDev/quickjs/releases/download/$(version)/quickjs-win-x86_64.zip")
    add_versions("2022-03-07", "af0c38b0cf80aa1deb58e727e408477fffcc6f5f57da537dffc335861d652ed0")
    add_versions("2024-02-14", "a180e3601d5ee1d28cf1d876d7529a00437504f0b39e1b31ec858cd6e497d81d")

    on_install(function (package)
        os.cp("*", package:installdir())
    end)
