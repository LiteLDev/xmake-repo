package("levilamina")
    add_urls("https://github.com/LiteLDev/LeviLamina.git")
    add_versions("0.7.2", "d2453d5a07bd9d40475c49fb9d1133bc1e5c2f93")

    on_load(function (package)
        import("core.base.semver")

        local dependencies = {
            ["x"] = {
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
                "preloader 1.5.0",
                "symbolprovider 1.1.0"
            },
            ["0.x"] = {
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
        import("package.tools.xmake").install(package)
    end)
