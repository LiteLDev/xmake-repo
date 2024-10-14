package("demangler")
    set_description("The demangler package")

    add_urls("https://github.com/LiteLDev/Demangler.git")

    add_versions("v1.0.2",  "6218c355e07abc197862fc2c8c3d9eeea8462c75")
    add_versions("v2.0.0",  "88865df2816654aa5e61d1646f69e02c97cd60b0")
    add_versions("v17.0.6", "94d8cd7a51ddd432e56ca1aba0fc091a48a10dff")
    add_versions("v17.0.7", "efd63f3c976493f42766edfbcc1642a0062d8517")
    add_versions("v19.1.1", "5656d832cb64a4274018d75ea79905dc5d5da301")
    add_versions("v19.1.2", "d82dd687fafb5e70f22598423345800182c754ff")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
