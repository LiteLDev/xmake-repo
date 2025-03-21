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
    end

    add_deps("prelink")

    on_install(function (package)
        os.cp("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
