package("preloader_android")
    set_homepage("https://github.com/LiteLDev/preloader-android")
    set_description("The preloader package")
    set_kind("library")
    add_urls("https://github.com/LiteLDev/preloader-android/archive/refs/tags/$(version).tar.gz",
             "https://github.com/LiteLDev/preloader-android.git")

    add_versions("0.1.11", "e462fb803b41363201847d7dbbc8f2b369c8d66e02e78a5aff7eeb7ff71db62c")
    add_versions("0.1.8" , "2661091a8a7b44d11887c21efe4e75a60e474e7f086f261bbe71f302cbb419a8")

    add_deps("cmake")

    on_load(function (package)
        package:data_set("cmake.build_shared", true)
        package:add("includedirs", "include")
    end)

    on_install(function (package)
    import("package.tools.cmake").install(package, { 
        "-DPlugin.SymbolResolver=OFF"
    })
    local instdir = package:installdir()
    if os.isdir("include") then
        os.cp("include/*", path.join(instdir, "include"))
    end
    if os.isdir("lib") then
        os.cp("lib/*", path.join(instdir, "lib"))
    end
end)
