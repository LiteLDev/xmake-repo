package("preloader_android")
    set_homepage("https://github.com/LiteLDev/preloader-android")
    set_description("The preloader package")
    set_kind("library")
    add_urls("https://github.com/LiteLDev/preloader-android/archive/refs/tags/$(version).tar.gz",
             "https://github.com/LiteLDev/preloader-android.git")

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
