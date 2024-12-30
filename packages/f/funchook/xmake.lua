package("funchook")
    set_description("Hook function calls by inserting jump instructions at runtime")

    set_urls("https://github.com/kubo/funchook.git")

    add_versions("v1.1.3", "2aca28efeb2a3b00c696e1c3e05b44581e118580")

    add_deps("cmake")

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        if package:config("shared") then
            table.insert(configs, "-DFUNCHOOK_BUILD_SHARED=ON")
        else
            table.insert(configs, "-DFUNCHOOK_BUILD_STATIC=ON")
        end
        import("package.tools.cmake").install(package, configs)
        os.mv("include/*", package:installdir("include"))
    end)