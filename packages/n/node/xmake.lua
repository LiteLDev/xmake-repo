package("node")
    add_urls("https://github.com/LiteLDev/node/releases/download/$(version)/node-win-x86_64.zip")
    add_versions("v16.16.0", "9b04418f18692c296afb3d4da8bfd0ce8794bfb371a7289c2cd00536cc516bee")

    add_includedirs("include/")
    add_includedirs("include/v8/")
    on_install(function (package)
        os.cp("*", package:installdir())
    end)
