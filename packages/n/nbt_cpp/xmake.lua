package("nbt_cpp")
    set_description("The nbt_cpp package")

    add_urls("https://github.com/LiteLDev/nbt-cpp.git")
    add_versions("v1.0.0", "158efbdc79cc3a72343dc5bd0830898247a26c68")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        configs["lib-only"] = true
        import("package.tools.xmake").install(package, configs)
    end)
