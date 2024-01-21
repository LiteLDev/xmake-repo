package("llvm-prebuilt")
    set_homepage("https://llvm.org/")
    set_description("The LLVM Project is a collection of modular and reusable compiler and toolchain technologies.")
    set_license("Apache-2.0")
    add_urls("https://github.com/awakecoding/llvm-prebuilt/releases/download/v2023.3.0/clang+llvm-$(version)-x86_64-windows.tar.xz")

    add_versions("16.0.6", "0d1c9f11572a382e62fd15d8937d37465795eb7bb87beecb0827d3668f201563")

    on_install("windows", function (package)
        if not is_arch("x64") then
            raise("only x64 supported")
        end
        os.mv("*", package:installdir())
    end)
