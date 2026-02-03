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
    add_versions("0.10.1", "3b52b2289284a6ca333b0192a186d57fa44398ec")
    add_versions("0.11.0", "bc4c49e3c7b61d49ca195c9d04c87fbc67a609da")
    add_versions("0.11.2", "94c339f4d11cf3ddc0a676dd19c4aaa1cb432a62")
    add_versions("0.12.0", "213818c9653fd9db63a279e9afbf893aed68efcc")
    add_versions("0.12.1", "25db4b9319db98c37323c952a036d8b7a8d73a8f")
    add_versions("0.12.2", "2bdbfa3ef2d319c93c2216f8f760bbf8bc6c3461")
    add_versions("0.13.0", "3d89965e0b5208aff1462a2bb09f97bb6034cfb0")

    local dependencies = {
        ["0.1.x"] = {"levilamina 0.9.x"},
        ["0.2.0"] = {"levilamina 0.10.x"},
        ["0.2.1"] = {"levilamina 0.11.x"},
        ["0.3.x"] = {"levilamina 0.12.x"},
        ["0.4.0"] = {"levilamina 0.13.0"},
        ["0.4.1"] = {"levilamina 0.13.4"},
        ["0.5.x"] = {"levilamina 1.0.x"},
        ["0.6.x"] = {"levilamina 1.1.x"},
        ["0.7.x"] = {"levilamina 1.2.x"},
        ["0.8.x"] = {"levilamina 1.3.x"},
        ["0.9.x"] = {"levilamina 1.4.x"},
        ["0.10.x"] = {"levilamina 1.5.x"},
        ["0.11.x"] = {"levilamina 1.6.x"},
        ["0.12.0"] = {"levilamina >=1.7.0 <=1.7.5"},
        [">=0.12.1 <0.13.0"] = {"levilamina >=1.7.6 <1.8.0"},
        ["0.13.x"] = {"levilamina >=1.9.2 <1.10.0"},
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
