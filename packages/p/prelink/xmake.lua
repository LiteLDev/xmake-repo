package("prelink")
    set_kind("binary")
    add_urls("https://github.com/LiteLDev/prelink-release/releases/download/$(version)/prelink-$(version)-windows-amd64.zip")

    add_versions("0.1.0", "8edd959195a9a95cb0545acbe725c15dc5dbb4675df03486b62119f0e5b9b9e6")

    on_install("windows", function (package)
        os.mv("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
