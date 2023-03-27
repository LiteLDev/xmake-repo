package("pe_bliss")
    set_description("The pe_bliss package")

    add_urls("https://github.com/LiteLDev/pe_bliss.git")
    add_versions("v1.0.0", "8b7712b719275a94732045e0d6d381e33f4db536")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
