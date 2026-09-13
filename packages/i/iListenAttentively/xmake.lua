package("ilistenattentively")
    add_urls("https://github.com/LiteLDev/iListenAttentively.git")

    add_configs("target_type", {default = "server", values = {"server", "client"}})

    on_install(function (package)
        if package:config("target_type") == "server" then
            import("package.tools.xmake").install(package)
        else
            import("package.tools.xmake").install(package, {"--target_type=client"})
        end
    end)
