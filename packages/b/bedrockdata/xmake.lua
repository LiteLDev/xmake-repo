package("bedrockdata")
    set_kind("binary")
    add_urls("https://github.com/LiteLDev/bedrock-runtime-data/releases/download/$(version)/bedrock_runtime_data")

    add_versions("1.21.0.03", "33375084537059974835bc6293d46e2c1322df4a6415c7f8ed161ec4ea122c4c")

    add_deps("prelink")

    add_bindirs("bin")

    on_install("windows", function (package)
        os.mv("*", package:installdir("bin"))
    end)
