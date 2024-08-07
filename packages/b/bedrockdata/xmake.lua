package("bedrockdata")
    set_kind("binary")
    add_urls("https://github.com/LiteLDev/bedrock-runtime-data/releases/download/$(version)/bedrock-runtime-data-$(version)-bdswin.zip")

    add_versions("1.21.0.03", "54ecd5130b6aeec9971bc5f5c9b7cc82a9aecc21b4745c193bc7b78d8eeaf78c")
    add_versions("1.21.3.01", "ee8a2abc48b4cdeed9761adc3cbbe741b3224e5b2ed7c61a45cee3ae2d4750fe")

    add_deps("prelink")

    on_install("windows", function (package)
        os.mv("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
