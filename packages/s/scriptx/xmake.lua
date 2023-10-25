package("scriptx")
    set_description("A versatile script engine abstraction layer. ")

    set_urls("https://github.com/LiteLDev/ScriptX-lib.git")
    add_versions("v1.0.0", "393dc8569e39157c90b527cfd373f4b5a6ce8ecb")

    on_install(function (package)
        os.cp("include/*", package:installdir("include", "scriptx"))
        os.cp("lib/*", package:installdir("lib", "scriptx"))
    end)
