package("moredimensions")
    add_urls("https://github.com/LiteLDev/MoreDimensions.git")
    add_versions("0.1.0", "cbda295e273f675c84f6f25a0d4e8b9fb1b70608")
    add_versions("0.1.1", "2b078626f60b5371aa9ed726cde48c9dabd829f8")
    add_versions("0.1.2", "e7d9aa2c34587434acb052fd25b73dcc1a3b26bb")
    add_versions("0.2.0", "eb2f733b21f258c2e8925db7517e81b7818d3740")
    add_versions("0.2.1", "82b58e1fea4c024b5db62c4e00665f24ef3df9c3")

    local dependencies = {
        ["0.1.x"] = {"levilamina 0.9.5"},
        ["0.2.0"] = {"levilamina 0.10.5"},
        ["0.2.1"] = {"levilamina 0.11.1"}
    }

    on_load(function (package)
        import("core.base.semver")
        for key, value in pairs(dependencies) do
            try{function()
                if semver.satisfies(package:version_str(), key) then
                    for _, dependency in ipairs(value) do
                        package:add("deps", dependency)
                    end
                end
            end}
        end
    end)

    on_install(function (package)
        import("package.tools.xmake").install(package)
    end)
