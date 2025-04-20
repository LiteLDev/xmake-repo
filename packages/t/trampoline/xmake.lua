package("trampoline")
    set_description("enable lambda on C callback without void* user_data")

    set_urls("https://github.com/microcai/trampoline.git")

    add_versions("2024.11.7", "e6abf9e4dba627052c8222825569d55831cb9f40")

    add_patches("2024.11.7", "patches/patch-cmake-version.diff", "f8a4e5dcbfb520f836d5328f8c56bf29de6a6e90fa983b2b6766b9c67eab897c")

    add_deps("cmake")

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        import("package.tools.cmake").install(package, configs)
        os.cp("include/*", package:installdir("include"))
    end)
