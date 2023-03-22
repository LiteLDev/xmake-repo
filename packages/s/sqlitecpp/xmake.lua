package("sqlitecpp")
    set_description("SQLiteCpp is a smart and easy to use C++ SQLite3 wrapper.")

    set_urls("https://github.com/SRombauts/SQLiteCpp/archive/refs/tags/$(version).tar.gz")

    add_versions("3.2.1", "70c67d5680c47460f82a7abf8e6b0329bf2fb10795a982a6d8abc06adb42d693")

    add_deps("cmake")

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=" .. (package:config("shared") and "ON" or "OFF"))
        import("package.tools.cmake").install(package, configs)
    end)
