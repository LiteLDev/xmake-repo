package("pe_bliss")
    set_description("The pe_bliss package")

    add_urls("https://github.com/LiteLDev/pe_bliss.git")
    add_versions("v1.0.0", "8b7712b719275a94732045e0d6d381e33f4db536")
    add_versions("v1.0.1", "bbd242facd06f52f5249301ff2e686a46540ffce")
    add_versions("v1.0.2", "733644d6ee7db7625a057f85569db766fe0c7478")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
