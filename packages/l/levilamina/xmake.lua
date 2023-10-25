package("levilamina")
    set_description("A lightweight, modular and versatile plugin loader for Minecraft Bedrock Server BDS, formerly known as LiteLoaderBDS")

    add_urls("https://github.com/LiteLDev/LeviLamina.git")
    add_versions("v1.0.0", "494f858bf808dd43a2d103e851aa5c69023d2e0f")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)