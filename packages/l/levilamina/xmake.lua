package("levilamina")
    add_urls("https://github.com/LiteLDev/LeviLamina/releases/download/v$(version)/levilamina-windows-x64.zip")
    add_versions("0.4.2", "6dba097d848bdd7811e1993bae6951ec69f550655620e7e6874de1fac459038c")
    add_versions("0.5.1", "1c4d63b005246e4b0867c5f301d382483507f0747d9ca11f04e556a9b134089c")
    add_versions("0.6.1", "2fa29d10023b1abe0e583564ad9b7477954219cd11575187230a2715c5d5f770")

    on_load(function (package)
        import("core.base.semver")

        local dependencies = {
            ["*"] = {
                "ctre 3.8.1",
                "entt 3.12.2",
                "fmt 10.1.1",
                "gsl 4.0.0",
                "leveldb 1.23",
                "magic_enum 0.9.0",
                "nlohmann_json 3.11.2",
                "rapidjson 1.1.0",
                "pcg_cpp 1.0.0",
                "pfr 2.1.1",
                "expected-lite v0.6.3",
                "preloader 1.4.0",
                "symbolprovider 1.1.0"
            },
            ["0.*.*"] = {
                "bdslibrary 1.20.50.03"
            }
        }

        for key, value in pairs(dependencies) do
            if semver.satisfies(package:version_str(), key) then
                for _, dependency in ipairs(value) do
                    package:add("deps", dependency)
                end
            end
        end
    end)

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
