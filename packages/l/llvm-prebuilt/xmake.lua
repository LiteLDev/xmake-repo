package("llvm-prebuilt")
    set_homepage("https://llvm.org/")
    set_description("The LLVM Project is a collection of modular and reusable compiler and toolchain technologies.")
    set_license("Apache-2.0")
    add_urls("https://github.com/LiteLDev/llvm-prebuilt/releases/download/v$(version)/clang+llvm-$(version)-x86_64-windows.tar.xz")

    add_versions("16.0.6", "0ac1b63a8be705074e910bef347e407aef38c3c11572dfe4c097cda19e9937a0")
    add_versions("18.1.1", "ef183114540cb2219a3ebc9bd2020cf7e7f207cca3b3a07e74bf692681f51b12")
    add_versions("18.1.4", "b49dc54698fd209981768988a6e705f814cb8db7dcfc1398d651749fde686b02")
    if is_plat("windows") then
        add_syslinks("version", "wsock32")
    end


    on_install("windows", function (package)
        if not is_arch("x64") then
            raise("only x64 supported")
        end
        os.mv("*", package:installdir())
    end)
