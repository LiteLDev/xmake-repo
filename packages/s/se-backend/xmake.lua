package("se-backend")
    set_description("scriptengine-backend repo")

    set_urls("https://github.com/LiteLDev/ScriptEngine-backend.git")
    add_versions("v1.0.0", "d5e1e13c6f7e8728aebba451ec398ae723e9f0aa")

    on_install(function (package)
        os.cp("include/*", package:installdir("include", "backend"))
        os.cp("lib/*", package:installdir("lib", "backend"))
    end)
