local deps_common = {
    "entt 41aab920b083aa424ac1d27666ce287eeaff6ceb",
    "expected-lite v0.7.0",
    "fmt 10.2.1",
    "gsl v4.0.0",
    "leveldb 1.23",
    "magic_enum v0.9.5",
    "nlohmann_json v3.11.3",
    "rapidjson v1.1.0",
    "ctre 3.8.1",
    "pcg_cpp v1.0.0",
    "pfr 2.1.1",
    "symbolprovider v1.2.0"
    -- "bedrockdata 1.21.3.01"
}
local deps_server = {
    "bedrockdata 1.21.3.1-server"
}
local deps_client = {
    "bedrockdata 1.21.0.3-client"
    -- "imgui v1.91.0-docking", {configs = {dx11 = true, dx12 = true}}
}

function load(package)
    for _, dep in ipairs(deps_common) do
        package:add("deps", dep)
    end
    if package:config("target_type") == "server" then
        for _, dep in ipairs(deps_server) do
            package:add("deps", dep)
        end
    else
        for _, dep in ipairs(deps_client) do
            package:add("deps", dep)
        end
    end
end
