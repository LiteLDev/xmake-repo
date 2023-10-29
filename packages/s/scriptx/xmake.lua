package("scriptx")
    add_urls("https://github.com/LiteLDev/prebuilt-scriptx/releases/download/$(version)/scriptx-windows-amd64.zip")
    add_versions("v0.1.0", "c7d5e9d87101528db81b3d1f8b441848b21b19fb3ca873831cb567ff59fdfd0a")

    add_config("backend", {values = {"lua", "python", "quickjs", "v8"}})

    on_install(function (package)
        local backend = package:config("backend")
        os.cp("include/*", package:installdir("include", "scriptx"))
        os.cp("lib/scriptx_" .. backend, package:installdir("lib"))
    end)
