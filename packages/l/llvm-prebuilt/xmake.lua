package("llvm-prebuilt")
    set_homepage("https://llvm.org/")
    set_description("The LLVM Project is a collection of modular and reusable compiler and toolchain technologies.")
    set_license("Apache-2.0")
    add_urls("https://github.com/LiteLDev/llvm-prebuilt/releases/download/v$(version)/clang+llvm-x86_64-windows.tar.xz")

    add_versions("16.0.6", "AC4B0CA88FCF156017C0115F3FB253C33672778DEBDB6513CFCA2133783E36C0")
    add_versions("18.1.1", "84D0FFB5067D6BBB801D045939AD0C0D27EECEAEF8C8AE5A855F3460400809A9")

    on_install("windows", function (package)
        if not is_arch("x64") then
            raise("only x64 supported")
        end
        os.mv("*", package:installdir())
    end)
