package("bedrockdata")
    set_kind("binary")

    if is_plat("windows") and is_arch("x64") then
        set_urls("https://github.com/LiteLDev/bedrock-runtime-data/releases/download/$(version)/bedrock-runtime-data-windows-x64.zip")
        add_versions("1.21.0.3-server", "54ecd5130b6aeec9971bc5f5c9b7cc82a9aecc21b4745c193bc7b78d8eeaf78c")
        add_versions("1.21.0.3-client", "c7e41b174226e7dcb7a10ff0e3cd1c48628e217133e5d02b8eee89ab045384c6")
        add_versions("1.21.3.1-server", "995cdb5f111aae059f9036410ab3cb283d0be915404662584cc87700cb383259")
        add_versions("1.21.20.3-server", "3faf191302f7109461b913c10348253c6b7c96d2232d623a81a0450f4f159ebf")
        add_versions("1.21.50.10-server", "2f943cb33ba61ab78c5493394633a332709a4239529c20659cbe94d01247f662")
        add_versions("1.21.60.10-server", "64b0117b7bedd5c5fc718cc30d7e045ccf4103e0a2c40008695d935f6e3fba82")
        add_versions("1.21.70.04-server.1", "63fd38debdc193c7572ef89ea72f60ad2b2e76d319280e2a557cf3bf562ad119")
        add_versions("1.21.70.04-server.2", "eddde5043d955451f7bb7e1cfdf199e3b1091abf766a7780c0ee8b09b33fffc0")
        add_versions("v1.21.7004-server.3", "903e6d6d0e74f9ba956dccb591610de49d18371e304fecfddb8c84add3c1db7a")
    end

    local deps = {
        ["1.21.0"] = {"prelink 0.3.0"},
        ["1.21.3"] = {"prelink 0.3.0"},
        ["1.21.20"] = {"prelink 0.3.0"},
        ["1.21.50"] = {"prelink 0.3.0"},
        ["1.21.60"] = {"prelink 0.3.0"},
        ["1.21.70"] = {"prelink 0.4.1"}
    }

    on_load(function(package)
        local version = package:version_str()
        local major, minor, patch = version:match("v?(%d+)%.(%d+)%.(%d+)")
        if not major or not minor or not patch then
            return
        end
        local dep = deps[major .. "." .. minor .. "." .. patch]
        if dep then
            package:add("deps", dep)
        end
    end)

    on_install(function (package)
        os.cp("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
