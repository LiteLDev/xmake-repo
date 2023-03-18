package("preloader")
    set_description("The preloader package")

    add_urls("https://github.com/LiteLDev/PreLoader/releases/download/$(version)/preloader-$(version)-windows-amd64.zip")
    add_versions("v1.0.0", "099d3dcd1c8d111041028d0a49c085020ae8ae53da63db05e90d15182684fce9")

    on_install(function (package)
        os.cp("include/*", package:installdir("include"))
        os.cp("PreLoader.lib", package:installdir("lib"))
    end)
