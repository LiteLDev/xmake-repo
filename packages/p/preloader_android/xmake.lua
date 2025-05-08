package("preloader_android")
    set_homepage("https://github.com/LiteLDev/preloader-android")
    set_description("The preloader package")

    add_urls("https://github.com/LiteLDev/preloader-android/archive/refs/tags/$(version).tar.gz")
    add_urls("https://github.com/LiteLDev/preloader-android.git")

    add_versions("0.1.0", "68917bd2b699d40827a39c616ac8bda367da6c9e1e98977fc80cb4f85256506e")
    add_versions("0.1.1", "aaecf8869083132cdf20effe6add3ca19f82b5bc6af83472b6e6b5426c3b6d5e")
    add_versions("0.1.2", "a355798b397e7f4642c7994003fb84f69300c35261209f35d6fe7f92ac654d20")

    add_configs("shared", {description = "Build shared library.", default = true, type = "boolean"})

    on_install(function(package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
