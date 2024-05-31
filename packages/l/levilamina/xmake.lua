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
    add_versions("0.10.0", "c93593bad49a24846159a892b5e5960af8aa8cf9")
    add_versions("0.10.1", "a142aa8c6c5df9d25ab90879d394c46f239f6aee")
    add_versions("0.10.2", "c5acae6cb20b5fff23f1018f8293a938a2e178c7")
    add_versions("0.10.4", "6db2bb94df743a3d87d8613f1eded49087016a3c")
    add_versions("0.10.5", "d9516c73d12111246f79642e93b8bd4638aea37e")
    add_versions("0.11.0", "09a67511f0be206c35ccc82289bec34f3fe7f45a")
    add_versions("0.11.1", "01b482c57b550487edfeb492701b4e19daf1a2f0")
    add_versions("0.12.0", "cd195e71cf4e7d5590092753cac2a835edc1ca8a")
    add_versions("0.12.1", "0e8f1f07320a772dbe83bb054cadf98c6bce55b1")
    add_versions("0.12.2", "916edf64504636ee8bad7b95162ef1f03c08895c")
    add_versions("0.12.3", "032fa4e52b5e17eaf5e8d661876b12a44818760e")
    add_versions("0.12.4", "935b0d8ee3b199fec6c6b500d22896b1ec987c81")

    local dependencies = {
        ["0.8.x"] = {"bdslibrary 1.20.61.01"},
        ["0.9.x"] = {"bdslibrary 1.20.62.02"},
        ["0.10.x"] = {"bdslibrary 1.20.72.01"},
        ["0.11.x"] = {"bdslibrary 1.20.72.01"},
        ["0.12.0"] = {"bdslibrary 1.20.80.05"},
        ["0.12.1"] = {"bdslibrary 1.20.80.05"},
        ["0.12.2"] = {"bdslibrary 1.20.80.05"},
        ["0.12.3"] = {"bdslibrary 1.20.81.01"},
        ["0.12.4"] = {"bdslibrary 1.20.81.01"}
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

