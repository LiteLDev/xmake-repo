package("preloader_android")
    set_homepage("https://github.com/LiteLDev/preloader-android")
    set_description("The preloader package")

    add_urls("https://github.com/LiteLDev/preloader-android/archive/refs/tags/$(version).tar.gz")
    add_urls("https://github.com/LiteLDev/preloader-android.git")

    add_versions("0.1.0", "68917bd2b699d40827a39c616ac8bda367da6c9e1e98977fc80cb4f85256506e")

    add_configs("shared", {description = "Build shared library.", default = true, type = "boolean"})

    on_install(function(package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)