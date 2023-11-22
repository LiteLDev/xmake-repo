package("levilamina")
    set_description("A lightweight, modular and versatile plugin loader for Minecraft Bedrock Server BDS, formerly known as LiteLoaderBDS")

    add_urls("https://github.com/LiteLDev/LeviLamina/releases/download/v$(version)/levilamina-windows-x64.zip")
    add_versions("0.1.0", "bc4ee0cd9cbb59a3e57031b150ad990c17a7355474dfefac6ad3e05ef785bcd3")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
