package("pcg_cpp")
    set_kind("library", {headeronly = true})
    set_description("pcg_cpp")

    add_urls("https://github.com/imneme/pcg-cpp.git")
    add_versions("v1.0.0", "428802d1a5634f96bcd0705fab379ff0113bcf13")

    on_install(function (package)
        os.cp("include/*", package:installdir("include", "pcg_cpp"))
    end)
