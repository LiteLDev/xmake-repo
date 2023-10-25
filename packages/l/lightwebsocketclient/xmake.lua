package("lightwebsocketclient")
    set_description("The lightwebsocketclient package")

    add_urls("https://github.com/LiteLDev/LightWebSocketClient.git")
    add_versions("v1.0.0", "31a1a9c430894fc43b07190fd62f06c143f81fbf")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)