package("libbase64")
    set_description("Fast Base64 stream encoder/decoder in C99, with SIMD acceleration")

    set_urls("https://github.com/aklomp/base64.git")

    add_versions("0.5.2", "8bdda2d47caf8b066999c5bd01069e55bcd0d396")

    add_deps("cmake")

    add_defines("BASE64_STATIC_DEFINE")

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=Release")
        table.insert(configs, "-DBUILD_SHARED_LIBS=OFF")
        import("package.tools.cmake").install(package, configs)
        os.mv("include/*", package:installdir("include"))
        os.mv("lib/*.lib", package:installdir("lib"))
    end)
