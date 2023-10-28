package("toml++")
    set_description("Header-only TOML config file parser and serializer for C++17.")

    add_urls("https://github.com/marzer/tomlplusplus.git")
    add_versions("v3.4.0", "30172438cee64926dc41fdd9c11fb3ba5b2ba9de")

    on_install(function (package)
        os.cp("include/toml++/*", package:installdir("include"))
    end)
