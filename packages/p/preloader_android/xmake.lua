package("preloader_android")
    set_homepage("https://github.com/LiteLDev/preloader-android")
    set_description("The preloader package")
    set_kind("library")
    add_urls("https://github.com/LiteLDev/preloader-android/archive/refs/tags/$(version).tar.gz",
             "https://github.com/LiteLDev/preloader-android.git")

    add_versions("0.1.19", "d09333b29412b56ebb9cf22b6640ea0bced00a36f1ba5b0058fb7611fcd006e8")       
    add_versions("0.1.18", "b93e6f042d5963c9be7a3fac52f45add65a72559052086c52d77468ca83eb700")
    add_versions("0.1.16", "87cfed2b0b5eedaa5d3fa62be61243e271fa20742419a8fd23acb7730883e692")
    add_versions("0.1.14", "fc7efef29682657ec0be725f035b0492196278ea90c4daf337f907903d0c4324")
    add_versions("0.1.13", "2b22f5260b172a7b79e3b9db5c5827a9cb4646809424d9414fd36d34c14859b3")

    add_deps("cmake")

    on_load(function (package)
        package:data_set("cmake.build_shared", true)
        package:add("includedirs", "include")
    end)

    on_install(function (package)
    import("package.tools.cmake").install(package, {})
    local instdir = package:installdir()
    if os.isdir("include") then
        os.cp("include/*", path.join(instdir, "include"))
    end
    if os.isdir("lib") then
        os.cp("lib/*", path.join(instdir, "lib"))
    end
end)
