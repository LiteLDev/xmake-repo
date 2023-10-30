package("scriptx")
    add_urls("https://github.com/LiteLDev/ScriptX/releases/download/$(version)/scriptx-windows-x64.zip")
    add_versions("v0.1.0", "edc80fed5b29dcf801ef05620f486b79824628afc955cec0d86cfb6ee69282f6")

    add_configs("backend", {default = "lua", values = {"lua", "nodejs", "python", "quickjs"}})
    add_configs("python", {default = "310"})

    on_install(function (package)
        local scriptx_info = {
            ["lua"] = {
                backend = "lua",
                scriptx = "lua",
            },
            ["nodejs"] = {
                backend = "libnode",
                scriptx = "v8",
            },
            ["python"] = {
                backend = "python" .. package:config("python"),
                scriptx = "python",
            },
            ["quickjs"] = {
                backend = "quickjs",
                scriptx = "quickjs",
            },
        }

        local backend_code = package:config("backend")

        -- ScriptX
        os.cp("include/scriptx/*", package:installdir("include", "scriptx"))
        os.cp("lib/scriptx_" .. scriptx_info[backend_code].scriptx .. ".lib",
            package:installdir("lib"))

        -- Backend
        os.cp("include/" .. scriptx_info[backend_code].backend .. "/*",
            package:installdir("include", scriptx_info[backend_code].backend))
        os.cp("lib/" .. scriptx_info[backend_code].backend .. ".lib",
            package:installdir("lib"))
    end)
