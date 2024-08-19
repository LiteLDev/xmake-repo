package("expected-lite")
    set_kind("library", {headeronly = true})
    set_homepage("https://github.com/martinmoene/expected-lite")
    set_description("expected lite - Expected objects in C++11 and later in a single-file header-only library")
    set_license("BSL-1.0")

    add_urls("https://github.com/martinmoene/expected-lite.git")

    add_versions("v0.7.0", "3634b0a6d8dffcffad4d1355253d79290c0c754c")
    add_versions("v0.8.0", "f339d2f73730f8fee4412f5e4938717866ecef48")

    on_install(function (package)
        os.cp("include", package:installdir())
    end)

    on_test(function (package)
        assert(package:check_cxxsnippets({test = [[
            #include <nonstd/expected.hpp>
            nonstd::expected<int, std::string> test() {
                return 0;
            }
        ]]}, {configs = {languages = "c++11"}}))
    end)
