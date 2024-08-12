package("bedrockdata")
    set_kind("binary")

    on_source(function (package)
        if package:is_plat("windows") and package:is_arch("x64") then
            package:set("urls", "https://github.com/LiteLDev/bedrock-runtime-data/releases/download/$(version)/bedrock-runtime-data-$(version)-server-windows-x64.zip", {alias = "server"})
            package:set("urls", "https://github.com/LiteLDev/bedrock-runtime-data/releases/download/$(version)/bedrock-runtime-data-$(version)-client-windows-x64.zip", {alias = "client"})
            package:add("versions", "server:1.21.0.03", "54ecd5130b6aeec9971bc5f5c9b7cc82a9aecc21b4745c193bc7b78d8eeaf78c")
            package:add("versions", "server:1.21.3.01", "ee8a2abc48b4cdeed9761adc3cbbe741b3224e5b2ed7c61a45cee3ae2d4750fe")
            package:add("versions", "client:1.21.0.03", "c5f623d6b0aee79d530421d99654bca9537224ac178b6ccb27fc63e59c0df2c0")
        end
    end)

    add_deps("prelink")

    on_install(function (package)
        os.mv("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
