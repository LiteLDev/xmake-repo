package("moredimensions")
    add_urls("https://github.com/LiteLDev/MoreDimensions.git")
    add_versions("0.1.0", "cbda295e273f675c84f6f25a0d4e8b9fb1b70608")
    add_versions("0.1.1", "2b078626f60b5371aa9ed726cde48c9dabd829f8")
    add_versions("0.1.2", "e7d9aa2c34587434acb052fd25b73dcc1a3b26bb")

    add_deps("levilamina")
    on_install(function (package)
        import("package.tools.xmake").install(package)
    end)