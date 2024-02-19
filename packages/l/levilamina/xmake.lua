package("levilamina")
    add_urls("https://github.com/LiteLDev/LeviLamina.git")
    add_versions("0.8.1", "73715bc9118f8d899e14665bad7157febbb90783")

    add_deps("entt")
    add_deps("expected-lite")
    add_deps("fmt")
    add_deps("gsl")
    add_deps("leveldb")
    add_deps("magic_enum")
    add_deps("nlohmann_json")
    add_deps("rapidjson v1.1.0")
    add_deps("ctre")
    add_deps("pcg_cpp")
    add_deps("pfr")
    add_deps("symbolprovider ~1")

    add_defines("ENTT_PACKED_PAGE=128")

    on_load(function (package)
        import("core.base.semver")

        local dependencies = {
            ["0.8.1"] = {"bdslibrary 1.20.61.01"}
        }

        for key, value in pairs(dependencies) do
            try{function()
                if semver.satisfies(package:version_str(), key) then
                    for _, dependency in ipairs(value) do
                        package:add("deps", dependency)
                    end
                end
            end}
        end
    end)

    on_install(function (package)
        import("package.tools.xmake").install(package)
    end)

