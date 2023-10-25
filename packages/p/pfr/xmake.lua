package("pfr")

    set_description("std::tuple like methods for user defined types without any macro or boilerplate code")

    set_urls("https://github.com/LiteLDev/pfr.git")
    add_versions("2.1.1", "294a4976bd04829dd204aaf9e9fd30338a5d3199")

    on_install(function (package)
        os.cp("include/*", package:installdir("include"))
    end)
