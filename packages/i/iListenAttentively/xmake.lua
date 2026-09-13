package("ilistenattentively")
    add_urls("https://github.com/LiteLDev/iListenAttentively.git")
    add_versions("v0.14.0", "babf8f656ae768ef833d4ce2a3da5a559c434c32")

    add_configs("target_type", {default = "server", values = {"server", "client"}})

    on_install(function (package)
        if package:config("target_type") == "server" then
            import("package.tools.xmake").install(package)
        else
            import("package.tools.xmake").install(package, {"--target_type=client"})
        end
    end)
