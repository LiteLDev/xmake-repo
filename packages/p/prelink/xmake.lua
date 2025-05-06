package("prelink")
    set_kind("binary")

    if is_plat("windows") and is_arch("x64") then
       set_urls("https://github.com/LiteLDev/prelink-release/releases/download/$(version)/prelink-$(version)-windows-x64.zip")
       add_versions("0.1.0", "8edd959195a9a95cb0545acbe725c15dc5dbb4675df03486b62119f0e5b9b9e6")
       add_versions("0.2.0", "5fee60e94a7f557bcb818842d37091e1f766aa8ffeefd5be1895b02e030b5653")
       add_versions("0.3.0", "1a4a17b1acb56f4d1aa5098dc9457d30a02ca9fe6f15d986db10288bede2870e")
       add_versions("0.4.0", "5f47ef425452c03ea0c6db0dcf130cb66d8f15c4288c57ff42bbec086a4d8262")
    end

    on_install(function (package)
        os.cp("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
