package("bedrockdata")
    set_kind("binary")

    if is_plat("windows") and is_arch("x64") then
        set_urls("https://github.com/LiteLDev/bedrock-runtime-data/releases/download/$(version)-windows-x64.zip",
        {version = function (version)
            local verstr = tostring(version)
            local mcver, side = verstr:match("(.*)-(.*)")
            mcver = mcver:gsub("-", ".")
            return mcver.."/bedrock-runtime-data-"..mcver.."-"..side
        end})
        add_versions("1.21.3-01-server", "ee8a2abc48b4cdeed9761adc3cbbe741b3224e5b2ed7c61a45cee3ae2d4750fe")
        add_versions("1.21.0-03-server", "54ecd5130b6aeec9971bc5f5c9b7cc82a9aecc21b4745c193bc7b78d8eeaf78c")
        add_versions("1.21.0-03-client", "5185c203b8f705e3d8a181008363638e3194d9e826bdd4d7b98a68a53c7f32cc")
    end

    add_deps("prelink")

    on_install(function (package)
        os.mv("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
