package("levilamina")
    add_urls("https://github.com/LiteLDev/LeviLamina.git")
    add_versions("0.8.3", "380a9adf484127391ec47c06cb72c5f331d31bf7")
    add_versions("0.8.4", "00e0c9086d7168ba83a430fcf11c29bdaa186350")
    add_versions("0.9.0", "dc310d1e75d652a871e97516203be8b3cee16656")
    add_versions("0.9.1", "cc032aba98256aafbb925f78c2e7e5f67f1cd6f3")
    add_versions("0.9.2", "2f58b1be95bac2b87170e6fab5a5aae9dea69225")
    add_versions("0.9.3", "890cb5c2b86dd9498853e6813854ad99e6f849ea")
    add_versions("0.9.4", "bc8b5dc8f1ef84dc44f58cc44c6e86cc21b788b8")
    add_versions("0.9.5", "cf02a42f3a89edf7c9762c2cba3984ef095b4883")

    local dependencies = {
        ["0.8.3"] = {"bdslibrary 1.20.61.01"},
        ["0.8.4"] = {"bdslibrary 1.20.61.01"},
        ["0.9.0"] = {"bdslibrary 1.20.62.02"},
        ["0.9.1"] = {"bdslibrary 1.20.62.02"},
        ["0.9.2"] = {"bdslibrary 1.20.62.02"},
        ["0.9.3"] = {"bdslibrary 1.20.62.02"},
        ["0.9.4"] = {"bdslibrary 1.20.62.02"},
        ["0.9.5"] = {"bdslibrary 1.20.62.02"}
    }

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

