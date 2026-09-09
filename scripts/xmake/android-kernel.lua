set_xmakever("3.0.0")
add_rules("mode.release", "mode.debug")
set_defaultarchs("android|arm64-v8a")
set_allowedarchs("android|arm64-v8a")
set_toolchains("ndk")
set_runtimes("c++_shared")
set_policy("build.ccache", false)
-- Paired cc1 trace flags cannot be meaningfully probed one flag at a time.
-- Unsupported flags must fail compilation instead of silently disappearing.
set_policy("check.auto_ignore_flags", false)

local inputs = {
    {"android_header_root", "header-root"},
    {"android_dependency_lock", "dependency-lock"},
    {"preloader_android_root", "preloader-root"},
    {"android_prelink_executable", "prelink"},
    {"android_runtime_manifest", "runtime-manifest"},
    {"android_bmb", "bmb"},
    {"android_provider_elf", "provider"},
    {"android_target_elf", "target"},
    {"ndk", "ndk"}
}
target("LeviLaminaAndroidKernel")
    set_kind("shared")
    set_basename("LeviLamina")
    set_languages("c++20")
    set_symbols("debug")
    set_exceptions("none")
    add_defines("LL_PLAT_A")
    add_cxxflags("-fPIC", "-fvisibility=hidden", "-fvisibility-inlines-hidden", "-fno-exceptions", "-fno-rtti", {force = true})
    add_cxxflags("-Wall", "-Wextra", "-Wpedantic", "-Werror", "--system-header-prefix=mc/", {force = true})
    add_shflags("-Wl,-z,defs", "-Wl,-z,max-page-size=16384", "-Wl,-z,common-page-size=16384", {force = true})
    add_shflags("-Wl,-soname,libLeviLamina.so", {force = true})
    add_shflags("-Wl,--version-script=" .. path.join(os.projectdir(), "scripts/xmake/android-kernel.exports"), {force = true})
    on_load(function(target)
        import("core.project.config")
        import("core.base.json")
        local output = path.absolute(path.join(config.builddir(), "g2/inputs.json"))
        assert(tonumber(get_config("ndk_sdkver")) == 28, "P6 requires --ndk_sdkver=28")
        assert(get_config("runtimes") == "c++_shared", "P6 requires --runtimes=c++_shared for the NDK toolchain")
        local args = {
            path.join(os.projectdir(), "scripts/android_kernel_inputs.py"),
            "--repo", os.projectdir(), "--output", output,
            "--api", tostring(get_config("ndk_sdkver")), "--arch", tostring(get_config("arch"))
        }
        for _, entry in ipairs(inputs) do
            local value = get_config(entry[1])
            assert(value and #tostring(value) > 0, "Missing required P6 input: " .. entry[1])
            table.insert(args, "--" .. entry[2])
            table.insert(args, value)
        end
        os.vrunv("python", args)
        target:data_set("p6.inputs", output)
        target:data_set("p6.authenticate", args)
        local resolved = json.loadfile(output)
        for _, root in ipairs(resolved.include_roots) do target:add("includedirs", root) end
        for _, root in ipairs(resolved.system_include_roots) do target:add("sysincludedirs", root) end
        local traces = path.absolute(path.join(config.builddir(), "g2/includes"))
        os.mkdir(traces)
        -- Explicit source table: new desktop or Android files never enter implicitly.
        for _, name in ipairs({"KernelEntry", "KernelLifecycle", "HeaderSmoke"}) do
            target:add("files", path.join(os.projectdir(), "src-android/ll/core/android/" .. name .. ".cpp"), {
                cxxflags = {"-H", "-Xclang=-header-include-file", "-Xclang=" .. path.join(traces, name .. ".txt")}
            })
        end
        target:data_set("p6.traces", traces)
    end)
    before_build(function(target)
        os.vrunv("python", target:data("p6.authenticate"))
    end)
    before_link(function(target)
        local args = {
            path.join(os.projectdir(), "scripts/android_kernel_binary.py"), "objects",
            "--inputs", target:data("p6.inputs"), "--traces", target:data("p6.traces")
        }
        for _, file in ipairs(target:objectfiles()) do
            table.insert(args, "--object")
            table.insert(args, path.absolute(file))
        end
        os.vrunv("python", args)
    end)
    after_build(function(target)
        os.vrunv("python", {
            path.join(os.projectdir(), "scripts/android_kernel_binary.py"), "elf",
            "--inputs", target:data("p6.inputs"), "--elf", path.absolute(target:targetfile())
        })
    end)
target_end()
