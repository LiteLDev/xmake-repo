package("bedrockdata")

    if is_plat("windows") and is_arch("x64") then
        add_urls("https://github.com/LiteLDev/bedrock-runtime-data/releases/download/$(version)/bedrock-runtime-data-windows-x64.zip")
        add_urls("https://github.com/LiteLDev/bedrock-runtime-data/releases/download/$(version)/bedrock-runtime-data-$(version)-windows-x64.zip")
        add_versions("1.21.0.3-server", "54ecd5130b6aeec9971bc5f5c9b7cc82a9aecc21b4745c193bc7b78d8eeaf78c")
        add_versions("1.21.0.3-client", "c7e41b174226e7dcb7a10ff0e3cd1c48628e217133e5d02b8eee89ab045384c6")
        add_versions("1.21.3.1-server", "995cdb5f111aae059f9036410ab3cb283d0be915404662584cc87700cb383259")
        add_versions("1.21.20.3-server", "3faf191302f7109461b913c10348253c6b7c96d2232d623a81a0450f4f159ebf")
        add_versions("1.21.50.10-server", "2f943cb33ba61ab78c5493394633a332709a4239529c20659cbe94d01247f662")
        add_versions("1.21.60.10-server", "64b0117b7bedd5c5fc718cc30d7e045ccf4103e0a2c40008695d935f6e3fba82")
        add_versions("1.21.70.04-server.1", "63fd38debdc193c7572ef89ea72f60ad2b2e76d319280e2a557cf3bf562ad119")
        add_versions("1.21.70.04-server.2", "eddde5043d955451f7bb7e1cfdf199e3b1091abf766a7780c0ee8b09b33fffc0")
        add_versions("v1.21.7004-server.3", "903e6d6d0e74f9ba956dccb591610de49d18371e304fecfddb8c84add3c1db7a")
        add_versions("v1.21.7004-server.4", "903e6d6d0e74f9ba956dccb591610de49d18371e304fecfddb8c84add3c1db7a")
        add_versions("v1.21.7004-server.5", "e355e3336c136235741530e502dc4fff81577d2ca2e5841f1304b16966744c94")
        add_versions("v1.21.7004-server.6", "be354c7d6368abdab1fb425f9389993bfeb0d0c68328d8525147a453fb5907d2")
    end

    local deps = {
        ["1.21.0.3-server"] = {"prelink v0.3.0"},
        ["1.21.0.3-client"] = {"prelink v0.3.0"},
        ["1.21.3.1-server"] = {"prelink v0.3.0"},
        ["1.21.20.3-server"] = {"prelink v0.3.0"},
        ["1.21.50.10-server"] = {"prelink v0.3.0"},
        ["1.21.60.10-server"] = {"prelink v0.3.0"},
        ["1.21.70.04-server.1"] = {"prelink v0.4.1"},
        ["1.21.70.04-server.2"] = {"prelink v0.4.1"},
        ["v1.21.7004-server.3"] = {"prelink v0.4.1"},
        ["v1.21.7004-server.4"] = {"prelink v0.4.1"},
        ["v1.21.7004-server.5"] = {"prelink v0.4.1"},
        ["v1.21.7004-server.6"] = {"prelink v0.5.0"},
    }

    on_load(function(package)
        local version = tostring(package:version_str())
        local dep = deps[version]
        if dep then
            package:add("deps", dep)
        end
    end)

    on_install(function (package)
        os.cp("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
