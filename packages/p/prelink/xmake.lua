package("prelink")
    set_kind("binary")

    if is_plat("windows") and is_arch("x64") then
       set_urls("https://github.com/LiteLDev/prelink-release/releases/download/$(version)/prelink-$(version)-windows-x64.zip")
       add_versions("0.1.0", "8edd959195a9a95cb0545acbe725c15dc5dbb4675df03486b62119f0e5b9b9e6")
       add_versions("0.2.0", "5fee60e94a7f557bcb818842d37091e1f766aa8ffeefd5be1895b02e030b5653")
    end

    on_install(function (package)
        os.mv("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
