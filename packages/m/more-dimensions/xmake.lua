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
    add_versions("0.6.1", "afe8a37f70522ab5931ba2917497b4c42c4322cc")
    add_versions("0.7.0", "45db1e3e8c653b4ffbdfe8f6e33b4f2a0760b123")
    add_versions("0.8.0", "44c7e07816792f47eff21da8f8ac3b685f72a0c9")
    add_versions("0.9.0", "0f9f7a4bdbd1578e862faa6ba43a56b3d20ee85b")

    local dependencies = {
        ["0.1.x"] = {"levilamina 0.9.5"},
        ["0.2.0"] = {"levilamina 0.10.5"},
        ["0.2.1"] = {"levilamina 0.11.1"},
        ["0.3.x"] = {"levilamina 0.12.4"},
        ["0.4.0"] = {"levilamina 0.13.0"},
        ["0.4.1"] = {"levilamina 0.13.4"},
        ["0.5.0"] = {"levilamina 1.0.1"},
        ["0.6.x"] = {"levilamina 1.1.0"},
        ["0.7.x"] = {"levilamina 1.2.0"},
        ["0.8.x"] = {"levilamina 1.3.1"},
        ["0.9.x"] = {"levilamina 1.4.1"},
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
