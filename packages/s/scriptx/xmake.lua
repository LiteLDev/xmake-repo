package("scriptx")
    add_urls("https://github.com/LiteLDev/ScriptX.git")
    add_versions("3.2.0", "1fae62097926328b7dd7e5415344e9d7fda465b4")

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

        local deps = {
            Lua = "lua v5.4.7",
            QuickJs = "quickjs-ng v0.8.0",
            Python = "python 3.12.8",
            V8 = "node v22.12.0",
        }

        print("Using ScriptX config: backend=" .. backend)
    
        package:add("defines", "SCRIPTX_BACKEND=" .. backend)
        package:add("defines", "SCRIPTX_BACKEND_TRAIT_PREFIX=../backend/" .. backend .. "/trait/Trait")
        if (backend == "QuickJs") then
            package:add("deps", deps[backend], {configs={libc=true}})
        else
            package:add("deps", deps[backend])
        end
    end)
