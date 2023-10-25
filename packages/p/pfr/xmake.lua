package("pfr")

    set_homepage("https://github.com/boostorg/pfr/")
    set_description("std::tuple like methods for user defined types without any macro or boilerplate code")

    set_urls("https://github.com/boostorg/pfr/archive/refs/tags/$(version).zip")
    add_versions("2.1.0", "193416fd6a08569c1b888cc41700f3e9a3718b8df7005aca074e8f4247579af1")

    on_install(function (package)
        os.cp("include/*", package:installdir("include"))
    end)
