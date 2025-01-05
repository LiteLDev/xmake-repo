package("moodycamelconqueue")
    set_homepage("https://github.com/cameron314/concurrentqueue")
    set_description("A fast multi-producer, multi-consumer lock-free concurrent queue for C++11")
    set_license("BSD")

    add_urls("https://github.com/cameron314/concurrentqueue/archive/refs/tags/$(version).tar.gz",
             "https://github.com/cameron314/concurrentqueue.git")

    add_versions("v1.0.4", "87fbc9884d60d0d4bf3462c18f4c0ee0a9311d0519341cac7cbd361c885e5281")

    add_deps("cmake")

    add_includedirs("include", "include/concurrentqueue")

    on_load(function (package)
        package:set("kind", "library", {headeronly = true})
    end)

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:is_debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=" .. (package:config("shared") and "ON" or "OFF"))
        import("package.tools.cmake").install(package, configs)
    end)
