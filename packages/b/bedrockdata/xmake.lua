package("bedrockdata")

    if is_plat("windows") and is_arch("x64") then
        add_urls("https://github.com/LiteLDev/bedrock-runtime-data/releases/download/$(version)/bedrock-runtime-data-$(version)-windows-x64.zip", {alias = "new"})
        add_urls("https://github.com/LiteLDev/bedrock-runtime-data/releases/download/$(version)/bedrock-runtime-data-windows-x64.zip", {alias = "old"})
        add_versionfiles("versions.txt")
    end

    local deps = {
        ["1.21.0.3-server"] = {"prelink v0.3.0"},
        ["1.21.0.3-client"] = {"prelink v0.3.0"},
        ["1.21.3.1-server"] = {"prelink v0.3.0"},
        ["1.21.20.3-server"] = {"prelink v0.3.0"},
        ["1.21.50.10-server"] = {"prelink v0.3.0"},
        ["1.21.60.10-server"] = {"prelink v0.3.0"},
        ["1.21.70.04-server"] = {"prelink v0.4.1"},
        ["v1.21.7004-server.3"] = {"prelink v0.4.1"},
        ["v1.21.7004-server.4"] = {"prelink v0.4.1"},
        ["v1.21.7004-server.5"] = {"prelink v0.4.1"},
        ["v1.21.7004-server.6"] = {"prelink v0.5.0"},
        ["v1.21.7004-server.7"] = {"prelink v0.5.0"},
        ["v1.21.7004-server.9"] = {"prelink v0.5.0"},
        ["v1.21.803-server"] = {"prelink v0.5.0"},
        ["v1.21.80-server"] = {"prelink v0.5.0"},
        ["v1.21.93-server"] = {"prelink v0.5.0"},
        ["v1.21.102-server"] = {"prelink v0.7.0"},
        ["v1.21.111-server"] = {"prelink v0.7.0"},
        ["v1.21.120-server"] = {"prelink v0.7.0"},
        ["v1.21.124-server.3"] = {"prelink v0.7.1"},
        ["v1.21.124-server"] = {"prelink v0.7.0"},
        ["v1.21.124-client"] = {"prelink v0.7.1"},
    }

    on_load(function(package)
        local version = tostring(package:version_str())
        local dep
        for ver, d in pairs(deps) do
            if version:startswith(ver) then
                dep = d
                break
            end
        end
        if dep then
            package:add("deps", dep)
        end
    end)

    on_install(function (package)
        os.cp("*", package:installdir("bin"))
        package:addenv("PATH", "bin")
    end)
