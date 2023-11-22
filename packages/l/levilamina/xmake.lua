package("levilamina")
    set_description("A lightweight, modular and versatile plugin loader for Minecraft Bedrock Server BDS, formerly known as LiteLoaderBDS")

    add_urls("https://github.com/LiteLDev/LeviLamina/releases/download/$(version)/levilamina-windows-x64.zip")
    add_versions("v0.1.0", "fdf3e6fbd688bd97bf21c9a372df24af08cfd9b2619e495bcada290134f52d4f")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
