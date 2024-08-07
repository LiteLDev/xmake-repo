package("prelink")
    set_kind("binary")
    add_urls("https://github.com/LiteLDev/prelink-release/releases/download/$(version)/prelink.exe")

    add_versions("0.1.0", "e7f961a66f1aeb5c38637967381cbf645a0944fd6ee36c457545cbcca466d8de")

    on_install("windows", function (package)
        os.mv("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
