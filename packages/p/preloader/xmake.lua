package("preloader")
    set_description("The preloader package")

    add_urls("https://github.com/LiteLDev/PreLoader/releases/download/$(version)/preloader-$(version)-windows-amd64.zip")
    add_versions("v1.0.2", "9868557faa4668d5b9dbff58ba1f43a409064d6b982f156704503680f1eb43a4")

    on_install(function (package)
        os.cp("include/*", package:installdir("include"))
        os.cp("PreLoader.lib", package:installdir("lib"))
    end)
