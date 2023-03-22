package("preloader")
    set_description("The preloader package")

    add_urls("https://github.com/LiteLDev/PreLoader.git")
    add_versions("v1.0.3", "9ec6cd9c2e0590e02229037435a15036eedd925a")

    add_configs("shared", {description = "Build shared library.", default = true, type = "boolean", readonly = true})

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
