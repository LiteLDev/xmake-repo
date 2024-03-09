package("moredimensions")
    add_urls("https://github.com/LiteLDev/MoreDimensions.git")
    add_versions("0.1.0", "cbda295e273f675c84f6f25a0d4e8b9fb1b70608")

    add_deps("levilamina")
    on_install(function (package)
        import("package.tools.xmake").install(package)
    end)
