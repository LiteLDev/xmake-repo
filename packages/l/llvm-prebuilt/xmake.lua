package("llvm-prebuilt")
    set_homepage("https://llvm.org/")
    set_description("The LLVM Project is a collection of modular and reusable compiler and toolchain technologies.")
    set_license("Apache-2.0")
    add_urls("https://github.com/LiteLDev/llvm-prebuilt/releases/download/v$(version)/clang+llvm-$(version)-x86_64-windows.tar.xz")

    add_versions("18.1.1", "EF183114540CB2219A3EBC9BD2020CF7E7F207CCA3B3A07E74BF692681F51B12")

    on_install("windows", function (package)
        if not is_arch("x64") then
            raise("only x64 supported")
        end
        os.mv("*", package:installdir())
    end)
