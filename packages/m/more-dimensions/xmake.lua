package("more-dimensions")
    add_urls("https://github.com/LiteLDev/MoreDimensions.git")
    add_versions("0.1.0", "cbda295e273f675c84f6f25a0d4e8b9fb1b70608")
    add_versions("0.1.1", "2b078626f60b5371aa9ed726cde48c9dabd829f8")
    add_versions("0.1.2", "e7d9aa2c34587434acb052fd25b73dcc1a3b26bb")
    add_versions("0.2.0", "eb2f733b21f258c2e8925db7517e81b7818d3740")
    add_versions("0.2.1", "0b79e6a73be7c4a74066f0069463a0431102efd3")
    add_versions("0.3.0", "afb43bf25b427e2e1e21fc919f201deb564d79d6")
    add_versions("0.3.1", "88d1f4c10c5181e7178cdaaa25fc086fc1d71b57")
    add_versions("0.4.0", "f407311b74fa38e62e68e4c77f49f23fea8eae08")
    add_versions("0.4.1", "4bfc452d022d7aabbb49562befe20a5af9582c62")
    add_versions("0.5.0", "d5b13a74271e780fd96c1a70b0ad721f633d81b3")
    add_versions("0.6.0", "e68e5ebfc762dc84c31b281cf603a94c53745022")

    local dependencies = {
        ["0.1.x"] = {"levilamina 0.9.5"},
        ["0.2.0"] = {"levilamina 0.10.5"},
        ["0.2.1"] = {"levilamina 0.11.1"},
        ["0.3.x"] = {"levilamina 0.12.4"},
        ["0.4.0"] = {"levilamina 0.13.3"},
        ["0.4.1"] = {"levilamina 0.13.4"},
        ["0.5.0"] = {"levilamina 1.0.1"},
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
