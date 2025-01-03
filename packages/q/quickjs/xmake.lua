package("quickjs")
    add_urls("https://github.com/LiteLDev/quickjs/releases/download/$(version)/quickjs-win-x86_64.zip")
    add_versions("2022-03-07", "af0c38b0cf80aa1deb58e727e408477fffcc6f5f57da537dffc335861d652ed0")
    add_versions("2024-02-14", "546f47b88897066855d41aa5cf6bb08e22b0d7381a2cce557fe284198802a8b2")

    on_install(function (package)
        os.cp("*", package:installdir())
    end)
