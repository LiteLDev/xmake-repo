package("prelink")

    if is_plat("windows") and is_arch("x64") then
       set_urls("https://github.com/LiteLDev/prelink-release/releases/download/$(version)/prelink-$(version)-windows-x64.zip")
       add_versions("v0.1.0", "8b457519f75ccbcc0c71be11ffa439e441510d57ab7753e08e5d786b3d087948")
       add_versions("v0.2.0", "9d5a5e156e1c6a00d840f8ccb11c4d6b8c0f19c777d154e797cf9e1ab323dcf9")
       add_versions("v0.3.0", "661a54f74a31711925fdac09d7b1cd1e39693a523de13f518fc81b864938349a")
       add_versions("v0.4.1", "79c313c8036a08d09d22d072bced4cedc641cff3775997472df07ea793133d68")
       add_versions("v0.5.0", "fa50e6a1cdf617815e99ca26be8984a787495e952cda76d818990bec1831b479")
       add_versions("v0.6.0", "23ba1f157bd11ac95080bf40b5e16f2b8771df67cfd77a501c6faa817762df44")
       add_versions("v0.7.0", "0539aa66764a6dafc00398e186aa524b0f69a2f524b39e4832c22bd83b9697f6")
    end

    on_install(function (package)
        -- xmake will move the first outer folder if only one exists
        -- so we have to handle bin folder manually
        os.cp("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
