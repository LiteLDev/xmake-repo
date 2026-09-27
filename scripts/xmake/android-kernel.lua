set_xmakever("3.0.0")
add_rules("mode.release", "mode.debug")
set_defaultarchs("android|arm64-v8a")
set_allowedarchs("android|arm64-v8a")
set_toolchains("ndk")
set_runtimes("c++_shared")
set_policy("build.ccache", false)
set_policy("check.auto_ignore_flags", false)
add_repositories("levimc-repo " .. (get_config("levimc_repo") or "https://github.com/LiteLDev/xmake-repo.git"))
add_requires("expected-lite v0.8.0", "fmt 11.2.0", "parallel-hashmap v2.0.0", "pfr 2.1.1",
             "magic_enum v0.9.7", "nlohmann_json v3.12.0", "ctre 3.8.1")
add_requires("gtest v1.17.0", {configs = {main = true, gmock = false}})

local input_options = {
    {"android_header_root", "header-root"}, {"android_dependency_lock", "dependency-lock"},
    {"preloader_android_root", "preloader-root"}, {"android_prelink_executable", "prelink"},
    {"android_runtime_manifest", "runtime-manifest"}, {"android_bmb", "bmb"},
    {"android_provider_elf", "provider"}, {"android_target_elf", "target"}, {"ndk", "ndk"}
}

local function shared_options(role)
    set_default(false)
    set_languages("c++23")
    set_exceptions("cxx")
    add_defines("LL_PLAT_A", "nsel_CONFIG_SELECT_EXPECTED=1", "FMT_USE_FULL_CACHE_DRAGONBOX=1", {public = true})
    add_cxxflags("-fexceptions", "-frtti", "-fPIC", "-fno-lto", "-fvisibility=hidden", "-fvisibility-inlines-hidden", {force = true})
    add_packages("expected-lite", "fmt", "parallel-hashmap", "pfr", "magic_enum", "nlohmann_json", "ctre", {public = true})
    on_load(function(target)
        import("core.project.config")
        import("core.base.json")
        assert(tonumber(get_config("ndk_sdkver")) == 28, "P7 requires Android API28")
        assert(get_config("runtimes") == "c++_shared", "P7 requires shared libc++")
        local evidence = path.absolute(path.join(config.builddir(), "android-kernel", role or "fixtures"))
        local receipt = path.join(evidence, "inputs.json")
        local args = {"-X", "utf8", path.join(os.projectdir(), "scripts/android_kernel_inputs.py"),
            "--repo", os.projectdir(), "--output", receipt}
        if role then
            table.insert(args, "--role")
            table.insert(args, role)
            for _, entry in ipairs(input_options) do
                table.insert(args, "--" .. entry[2])
                table.insert(args, assert(get_config(entry[1]), "Missing P7 input: " .. entry[1]))
            end
        else
            table.insert(args, "--prepare-shared-view")
            for _, entry in ipairs({{"android_header_root", "header-root"}, {"android_dependency_lock", "dependency-lock"}, {"ndk", "ndk"}}) do
                table.insert(args, "--" .. entry[2])
                table.insert(args, assert(get_config(entry[1]), "Missing fixture input: " .. entry[1]))
            end
        end
        os.vrunv("python", args)
        local inputs = json.loadfile(receipt)
        for _, root in ipairs(inputs.include_roots) do target:add("includedirs", root) end
        for _, root in ipairs(inputs.system_include_roots or inputs.dependency_roots) do target:add("sysincludedirs", root) end
        target:add("syslinks", "dl")
        if not role and target:kind() ~= "static" then
            target:add("ldflags", "-Wl,-z,defs", "-Wl,-z,max-page-size=16384", {force = true})
            target:add("shflags", "-Wl,-z,defs", "-Wl,-z,max-page-size=16384", {force = true})
        end
        if role then
            local traces = path.join(evidence, "includes")
            os.mkdir(traces)
            target:data_set("p7.inputs", receipt)
            target:data_set("p7.traces", traces)
            target:data_set("p7.prelink", path.join(evidence, "prelink"))
            for _, source in ipairs(inputs.sources) do
                local name = source:gsub("/", "_"):gsub("%.", "_")
                local flags = {"-H", "-Xclang=-header-include-file", "-Xclang=" .. path.join(traces, name .. ".txt")}
                if source:endswith("MemoryOperators_android.cpp") then table.insert(flags, "-fno-rtti") end
                target:add("files", path.join(os.projectdir(), source), {cxxflags = flags})
            end
            local tag = os.iorunv("git", {"describe", "--tags", "--abbrev=0", "--always"}):trim()
            local major, minor, patch, suffix = tag:match("v(%d+)%.(%d+)%.(%d+)(.*)")
            if not major then
                major, minor, patch, suffix = json.loadfile(path.join(os.projectdir(), "tooth.json")).version:match("(%d+)%.(%d+)%.(%d+)(.*)")
            end
            target:set("configvar", "LL_VERSION_MAJOR", major)
            target:set("configvar", "LL_VERSION_MINOR", minor)
            target:set("configvar", "LL_VERSION_PATCH", patch)
            target:set("configvar", "LL_WORKSPACE_FOLDER", os.projectdir())
            target:set("configvar", "GIT_COMMIT", os.iorunv("git", {"rev-parse", "--short", "HEAD"}):trim())
            local prerelease = suffix and suffix:match("^%-(.*)")
            if prerelease then target:set("configvar", "LL_VERSION_PRERELEASE", prerelease) end
        end
    end)
end

for _, role in ipairs({"kernel", "example"}) do
    target(role == "kernel" and "LeviLamina" or "LeviLaminaP7Example")
        set_kind("shared")
        shared_options(role)
        if role == "kernel" then add_defines("LL_EXPORT") else add_deps("LeviLamina", {inherit = false}) end
        if is_mode("debug") then add_defines("LL_DEBUG") end
        set_symbols("debug")
        set_configdir("$(builddir)/config")
        add_configfiles(path.join(os.projectdir(), "src/(ll/core/Version.h.in)"))
        add_includedirs("$(builddir)/config")
        on_link(function(target)
            local args = {"-X", "utf8", path.join(os.projectdir(), "scripts/android_kernel_link.py"),
                "--inputs", target:data("p7.inputs"), "--traces", target:data("p7.traces"),
                "--prelink-dir", target:data("p7.prelink"), "--elf", path.absolute(target:targetfile())}
            for _, object in ipairs(target:objectfiles()) do
                table.insert(args, "--object")
                table.insert(args, path.absolute(object))
            end
            for _, archive in ipairs(table.wrap(target:pkg("fmt"):get("libfiles"))) do
                table.insert(args, "--archive")
                table.insert(args, archive)
            end
            if role == "example" then
                table.insert(args, "--kernel-elf")
                table.insert(args, path.absolute(target:dep("LeviLamina"):targetfile()))
            end
            os.vrunv("python", args)
        end)
    target_end()
end

target("LeviLaminaAndroidFoundation")
    set_kind("static")
    shared_options()
    add_defines("LL_EXPORT")
    for _, source in ipairs({"src/ll/core/mod/ModLoadPlanner.cpp", "src/ll/api/service/GamingStatus.cpp",
        "src/ll/api/Expected.cpp", "src/ll/api/i18n/I18n.cpp", "src/ll/api/reflection/ReflectionError.cpp",
        "src-android/ll/api/utils/ErrorUtils_android.cpp", "src-android/ll/api/utils/SystemUtils_android.cpp",
        "src-android/ll/api/utils/FromChars_android.cpp"}) do
        add_files(path.join(os.projectdir(), source))
    end
target_end()

for _, name in ipairs({"A", "B"}) do
    target("P7Module" .. name)
        set_kind("shared")
        shared_options()
        add_defines("P7_MODULE_NAME=\"" .. name .. "\"")
        add_files(path.join(os.projectdir(), "test/android/shared_core/module.cpp"))
    target_end()
end

target("P7StringTests")
    set_kind("binary")
    shared_options()
    add_deps("LeviLaminaAndroidFoundation")
    add_packages("gtest")
    add_files(path.join(os.projectdir(), "test/android/shared_core/string_tests.cpp"))
target_end()

target("P7ModuleFileTests")
    set_default(false)
    set_kind("binary")
    set_languages("c++23")
    set_exceptions("cxx")
    add_includedirs(path.join(os.projectdir(), "src-android"))
    add_files(path.join(os.projectdir(), "test/android/shared_core/module_files_io_tests.cpp"),
              path.join(os.projectdir(), "src-android/ll/core/mod/ModuleFiles.cpp"))
    add_syslinks("dl")
    add_ldflags("-Wl,-z,defs", "-Wl,-z,max-page-size=16384",
                "-Wl,--wrap=read,--wrap=pread,--wrap=fstat,--wrap=fsync", {force = true})
target_end()

target("P7ClientReadyHookTests")
    set_kind("binary")
    shared_options()
    add_defines("PRELOADER_EXPORT")
    add_includedirs(path.join(os.projectdir(), "src-android/ll/core"))
    on_config(function(target)
        local root = assert(get_config("preloader_android_root"), "Missing PL SDK")
        target:add("sysincludedirs", path.join(root, "src-android"), path.join(root, "src"))
    end)
    add_files(path.join(os.projectdir(), "src-android/ll/core/ClientLifecycle.cpp"),
              path.join(os.projectdir(), "test/android/shared_core/client_ready_hook_tests.cpp"))
target_end()

target("P7ModuleTests")
    set_kind("binary")
    shared_options()
    add_deps("LeviLaminaAndroidFoundation")
    add_deps("P7ModuleA", "P7ModuleB", {inherit = false})
    add_files(path.join(os.projectdir(), "test/android/shared_core/module_tests.cpp"))
    add_ldflags("-Wl,--wrap=dlclose", {force = true})
target_end()

for name, source in pairs({P7PlannerTests = "ModLoadPlannerTest.cpp", P7VersionTests = "VersionTest.cpp"}) do
    target(name)
        set_kind("binary")
        shared_options()
        add_deps("LeviLaminaAndroidFoundation")
        add_packages("gtest")
        add_files(path.join(os.projectdir(), "src-test/common", source))
    target_end()
end
