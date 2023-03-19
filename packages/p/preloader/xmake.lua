package("preloader")
    set_description("The preloader package")

    add_urls("https://github.com/LiteLDev/PreLoader/releases/download/$(version)/preloader-$(version)-windows-amd64.zip")
    add_versions("v1.0.1", "d4cab43d6a98f44fe1a58b46ecd0dbab606dd961918f3cede6af9b33b4a76dba")

    on_install(function (package)
        os.cp("include/*", package:installdir("include"))
        os.cp("PreLoader.lib", package:installdir("lib"))
    end)
