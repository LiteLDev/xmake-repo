package("nbt_cpp")
    set_description("The nbt_cpp package")

    add_urls("https://github.com/LiteLDev/nbt-cpp.git")
    add_versions("v1.0.0", "41f452fd0242bda32f9e81e4fe9379670e9ef15c")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
