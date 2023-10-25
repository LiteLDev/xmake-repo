package("scriptx")
    set_description("scriptx repo")

    set_urls("https://github.com/LiteLDev/ScriptX-lib.git")
    add_versions("v1.0.0", "e93767d30e3cb71a64c7c22b471e31f105d7c71c")

    on_install(function (package)
        os.cp("include/*", package:installdir("include", "scriptx"))
        os.cp("lib/*", package:installdir("lib", "scriptx"))
    end)
