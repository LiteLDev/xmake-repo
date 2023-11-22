package("levilamina")
    add_urls("https://github.com/LiteLDev/LeviLamina/releases/download/v$(version)/levilamina-windows-x64.zip")
    add_versions("0.1.0", "bc4ee0cd9cbb59a3e57031b150ad990c17a7355474dfefac6ad3e05ef785bcd3")

    on_load(function (package)
        local DEPS = {
            ["0.1.0"] = {
                "fmt 10.1.1",
                "magic_enum 0.9.0",
                "nlohmann_json 3.11.2"
            }
        }

        for _, dep in ipairs(DEPS[package:version_str()]) do
            package:add("deps", dep)
        end
    end)

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
