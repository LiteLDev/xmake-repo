package("ctre")

    set_homepage("https://github.com/hanickadot/compile-time-regular-expressions/")
    set_description("ctre is a Compile time PCRE (almost) compatible regular expression matcher.")

    set_urls("https://github.com/hanickadot/compile-time-regular-expressions/archive/refs/tags/v$(version).zip")
    add_versions("3.8.1", "7c7a936145defe56e886bac7731ea16a52de65d73bda2b56702d0d0a61101c76")

    on_install(function (package)
        os.cp("single-header/*", package:installdir("include", "ctre"))
    end)
