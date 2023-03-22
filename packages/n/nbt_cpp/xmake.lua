package("nbt_cpp")
    set_description("The nbt_cpp package")

    add_urls("https://github.com/LiteLDev/nbt-cpp.git")
    add_versions("v1.0.1", "386c2b0745b48f8a1d0ad8d6251e99c9d1f9a9d0")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        configs["lib-only"] = true
        import("package.tools.xmake").install(package, configs)
    end)
