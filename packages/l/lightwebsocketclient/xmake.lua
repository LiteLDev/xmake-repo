package("lightwebsocketclient")
    set_description("The lightwebsocketclient package")

    add_urls("https://github.com/LiteLDev/LightWebSocketClient.git")
    add_versions("v1.0.0", "31a1a9c430894fc43b07190fd62f06c143f81fbf")
    add_versions("v1.0.1", "d6798453c5f0d8a9ac1b261c2ea03e8b4cbaab78")
    add_versions("v1.0.2", "c04b2e02305f140a6e37ec3b39297cdfa7763296")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
