package("scriptx")
    add_urls("https://github.com/LiteLDev/ScriptX.git")
    add_versions("2024.2.9", "7376cfeadc07f6d51d4e416bda5ee14305bc8d16")
    add_versions("2024.5.8", "006d6de1422d62aa55daef7d50367620fc661677")
    add_versions("2025.5.22", "22184aeecdcee2c683ad99db6362837e4ec6b7fe")
    add_versions("2026.1.10", "95c7a9fb63f62444c1f884a56e912b6e1a593ca4")

    add_configs("backend", {default = "Lua", values = {"Lua", "QuickJs", "Python", "V8"}})
    add_includedirs(
        "include/src/include/"
    )

    on_install(function (package)
        local configs = {
            backend = package:config("backend"),
        }
        import("package.tools.xmake").install(package, configs)
    end)

    on_load(function (package)
        local backend = package:config("backend")
        local version = package:version_str()
        local deps = {}
        if version == "2026.1.10" then
            deps = {
                Lua = "lua v5.4.7",
                QuickJs = "quickjs-ng v0.11.0",
                Python = "python 3.12.10",
                V8 = "node v22.12.0",
            }
        elseif version == "2025.5.22" or version == "22184aee" or version == "775b9f5d" then
            deps = {
                Lua = "lua 5.4.7",
                QuickJs = "quickjs-ng 0.8.0",
                Python = "python 3.12.8",
                V8 = "node v22.12.0",
            }
        else
            deps = {
                Lua = "lua 5.4.6",
                QuickJs = "quickjs 2024.01.13",
                Python = "python 3.10.11",
                V8 = "node v16.16.0",
            }
        end

        print("Using ScriptX config: backend=" .. backend)
    
        package:add("defines", "SCRIPTX_BACKEND=" .. backend)
        package:add("defines", "SCRIPTX_BACKEND_TRAIT_PREFIX=../backend/" .. backend .. "/trait/Trait")
        if (backend == "QuickJs") then
            package:add("deps", deps[backend], {configs={libc=true}})
        else
            package:add("deps", deps[backend])
        end
    end)
