package("levilamina")
    add_urls("https://github.com/LiteLDev/LeviLamina/releases/download/v$(version)/levilamina-windows-x64.zip")
    add_versions("0.3.0", "d735eccdc63d1fff8499c09f9243f18b2f0707618a4630d8479e1b32866f1b0d")
    add_versions("0.4.0", "42cb92cd0205b9708e7cc900ba26f07857d005d88535483cc088e6a79d4a750b")
    add_versions("0.4.1", "0568014d25dd0c25460099111210a4375e3bfadad8f08c46035c08f21cc65b9b")
    add_versions("0.4.2", "6dba097d848bdd7811e1993bae6951ec69f550655620e7e6874de1fac459038c")

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
                "preloader 1.4.0",
                "symbolprovider 1.1.0"
            },
            ["0.3.* || 0.4.*"] = {
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
