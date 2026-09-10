set_xmakever("3.0.0")
add_rules("mode.release", "mode.debug")
set_defaultarchs("android|arm64-v8a")
set_allowedarchs("android|arm64-v8a")
set_toolchains("ndk")
set_runtimes("c++_shared")
set_policy("build.ccache", false)
set_policy("check.auto_ignore_flags", false)
includes("../../xmake/rules/android_prelink.lua")

local inputs = {
    {"android_header_root", "header-root"}, {"android_dependency_lock", "dependency-lock"},
    {"preloader_android_root", "preloader-root"}, {"android_prelink_executable", "prelink"},
    {"android_runtime_manifest", "runtime-manifest"}, {"android_bmb", "bmb"},
    {"android_provider_elf", "provider"}, {"android_target_elf", "target"}, {"ndk", "ndk"}
}
local kernel_sources = {
    "core/main_android.cpp", "core/KernelLifecycle.cpp", "core/HeaderSmoke.cpp",
    "api/android/KernelApi.cpp", "core/KernelContext.cpp", "core/io/KernelLogger.cpp",
    "core/KernelRuntime.cpp", "core/io/Output_android.cpp", "core/memory/RuntimeSymbols.cpp",
    "core/memory/HookTransaction.cpp", "core/event/EventRegistry.cpp", "core/mod/ModOwner.cpp",
    "core/mod/ModManifest.cpp", "core/mod/ElfModule.cpp", "core/mod/ModuleFiles.cpp",
    "core/mod/NativeModRegistry.cpp", "core/mod/NativeModManager.cpp"
}

local function define_kernel_target(name, role)
    target(name)
        set_kind("shared")
        set_basename(role == "kernel" and "LeviLamina" or "LeviLaminaP6Example")
        set_languages("c++20")
        set_symbols("debug")
        set_exceptions("none")
        add_rules("ll.android.prelink")
        if role == "example" then add_deps("LeviLaminaAndroidKernel") end
        add_defines("LL_PLAT_A", role == "kernel" and "LL_ANDROID_KERNEL_EXPORTS" or "LL_ANDROID_MOD_EXPORTS")
        add_cxxflags("-include", path.join(os.projectdir(), "src-android/ll/core/CompilationContract.h"), {force = true})
        add_cxxflags("-fPIC", "-fvisibility=hidden", "-fvisibility-inlines-hidden", "-fno-exceptions",
                     "-fno-rtti", "-fno-lto", "-fdebug-compilation-dir=.", "-Werror=date-time", {force = true})
        add_cxxflags("-Wall", "-Wextra", "-Wpedantic", "-Werror", "--system-header-prefix=mc/", {force = true})
        on_load(function(target)
            import("core.project.config")
            import("core.base.json")
            local output = path.absolute(path.join(config.builddir(), "android-kernel", role, "inputs.json"))
            assert(tonumber(get_config("ndk_sdkver")) == 28, "P6 requires --ndk_sdkver=28")
            assert(get_config("runtimes") == "c++_shared", "P6 requires --runtimes=c++_shared")
            local args = {path.join(os.projectdir(), "scripts/android_kernel_inputs.py"),
                "--repo", os.projectdir(), "--output", output, "--api", "28",
                "--arch", tostring(get_config("arch")), "--role", role}
            for _, entry in ipairs(inputs) do
                local value = get_config(entry[1])
                assert(value and #tostring(value) > 0, "Missing required P6 input: " .. entry[1])
                table.insert(args, "--" .. entry[2])
                table.insert(args, value)
            end
            os.vrunv("python", args)
            local resolved = json.loadfile(output)
            assert(resolved.phase == "G5" and resolved.source_layout == "platform-v1", "P6 source phase mismatch")
            target:data_set("p6.inputs", output)
            target:data_set("p6.authenticate", args)
            target:data_set("p6.role", role)
            target:data_set("p6.prelink", path.absolute(path.join(config.builddir(), ".prelink/android", name)))
            for _, root in ipairs(resolved.include_roots) do target:add("includedirs", root) end
            for _, root in ipairs(resolved.system_include_roots) do target:add("sysincludedirs", root) end
            local mappings = {
                {os.projectdir(), "/ll"}, {path.absolute(config.builddir()), "/build"},
                {resolved.inputs.header_root, "/header"}, {resolved.inputs.preloader_root, "/preloader"},
                {resolved.inputs.ndk, "/ndk"}
            }
            for index, root in ipairs(resolved.system_include_roots) do
                table.insert(mappings, {root, "/dependency/" .. tostring(index)})
            end
            for _, mapping in ipairs(mappings) do
                for _, spelling in ipairs({mapping[1], mapping[1]:gsub(string.char(92), "/")}) do
                    target:add("cxxflags", "-ffile-prefix-map=" .. spelling .. "=" .. mapping[2], {force = true})
                end
            end
            local traces = path.join(path.directory(output), "includes")
            os.mkdir(traces)
            target:data_set("p6.traces", traces)
            local sources = {}
            if role == "kernel" then
                for _, source in ipairs(kernel_sources) do table.insert(sources, path.join(os.projectdir(), "src-android/ll", source)) end
            else
                table.insert(sources, path.join(os.projectdir(), "examples/android-minimal-mod/src/main.cpp"))
            end
            for _, source in ipairs(sources) do
                target:add("files", source, {cxxflags = {"-H", "-Xclang=-header-include-file",
                    "-Xclang=" .. path.join(traces, path.basename(source) .. ".txt")}})
            end
        end)
        before_build(function(target)
            os.vrunv("python", target:data("p6.authenticate"))
            -- Every link re-authenticates runtime inputs, even if source objects
            -- were reusable. Only this target's disposable build output is removed.
            if os.isfile(target:targetfile()) then os.rm(target:targetfile()) end
        end)
    target_end()
end
define_kernel_target("LeviLaminaAndroidKernel", "kernel")
define_kernel_target("LeviLaminaP6Example", "example")
