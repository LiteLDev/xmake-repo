package("llvm-prebuilt")
    set_homepage("https://llvm.org/")
    set_description("The LLVM Project is a collection of modular and reusable compiler and toolchain technologies.")
    set_license("Apache-2.0")
    add_urls("https://github.com/llvm/llvm-project/releases/download/llvmorg-v$(version)/clang+llvm-$(version)-x86_64-pc-windows-msvc.tar.xz")

    add_versions("18.1.1", "79ea242c0fbd66c632ed3aaebf6f821c1e4c03140497c67ea750443eb36bfc5d")

    on_install("windows", function (package)
        if not is_arch("x64") then
            raise("only x64 supported")
        end
        os.mv("*", package:installdir())
    end)
