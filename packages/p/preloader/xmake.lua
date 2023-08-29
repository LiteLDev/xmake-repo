package("preloader")
    set_description("The preloader package")

    add_urls("https://github.com/LiteLDev/PreLoader.git")
    add_versions("v1.0.3", "9ec6cd9c2e0590e02229037435a15036eedd925a")
    add_versions("v1.1.0", "0b54d73ade8e534c390fae5451e3e541b74c184e")

    add_configs("shared", {description = "Build shared library.", default = true, type = "boolean", readonly = true})

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
