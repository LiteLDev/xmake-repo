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

package("levilamina-leveldb")
    set_license("BSD-3-Clause")
    set_description("LevelDB from the authenticated Android Header dependency lock")
    on_load(function(package)
        import("core.base.json")
        import("core.project.config")
        local runtime = json.loadfile(assert(config.get("android_dependency_lock")))
        for _, source in ipairs(runtime.sources) do
            if source.name == "LevelDB" then
                package:set("sourcedir", source.path)
                package:data_set("p7.source", source)
                return
            end
        end
        raise("Missing frozen LevelDB source")
    end)
    on_install(function(package)
        local source = package:data("p7.source")
        assert(source.commit == "3791effb6692e0c83da782210aa336a3dd436f30", "LevelDB source identity mismatch")
        assert(os.iorunv("git", {"-C", source.path, "rev-parse", "HEAD"}):trim() == source.commit,
               "LevelDB checkout identity mismatch")
        assert(os.iorunv("git", {"-C", source.path, "status", "--porcelain"}):trim() == "",
               "Frozen LevelDB source must be clean")
        import("package.tools.cmake").install(package, {
            "-DLEVELDB_BUILD_TESTS=OFF", "-DLEVELDB_BUILD_BENCHMARKS=OFF",
            "-DLEVELDB_DISABLE_RTTI=OFF", "-DBUILD_SHARED_LIBS=OFF",
            "-DCMAKE_POSITION_INDEPENDENT_CODE=ON", "-DCMAKE_CXX_STANDARD=23",
            "-DCMAKE_CXX_FLAGS=-fvisibility=hidden -fvisibility-inlines-hidden -Wno-error=deprecated-declarations"
        })
    end)
package_end()
add_requires("levilamina-leveldb")

local input_options = {
    {"android_header_root", "header-root"}, {"android_dependency_lock", "dependency-lock"},
    {"preloader_android_root", "preloader-root"}, {"android_prelink_executable", "prelink"},
    {"android_runtime_manifest", "runtime-manifest"}, {"android_bmb", "bmb"},
    {"android_provider_elf", "provider"}, {"android_target_elf", "target"}, {"ndk", "ndk"}
}
local prepared_inputs = {}

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
        local input_key = role or "fixtures"
        if not prepared_inputs[input_key] then
            os.vrunv("python", args)
            prepared_inputs[input_key] = json.loadfile(receipt)
        end
        local inputs = prepared_inputs[input_key]
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
                local trace = path.relative(path.join(traces, name .. ".txt"), os.projectdir())
                local flags = {"-H", "-Xclang=-header-include-file", "-Xclang=" .. trace}
                if source:endswith("ll/core/tweak/MemoryOperators.cpp") then table.insert(flags, "-fno-rtti") end
                target:add("files", path.join(os.projectdir(), source), {cxxflags = flags})
            end
            if role == "kernel" then
                target:add("headerfiles", path.join(os.projectdir(), "src/(ll/api/**.h)"),
                           path.join(os.projectdir(), "src-client/(ll/api/**.h)"))
                local helpers, exclusions = {}, {}
                for relative, _ in pairs(inputs.ll_headers) do
                    if relative:startswith("mc/") then
                        helpers[relative] = true
                        table.insert(exclusions, "|" .. relative)
                    end
                end
                table.sort(exclusions)
                for _, layer in ipairs({"src", "src-client"}) do
                    local root = path.join(inputs.inputs.header_root, layer)
                    target:add("headerfiles", path.join(root, "(mc/**.h)") .. table.concat(exclusions))
                end
                for relative, _ in pairs(helpers) do
                    target:add("headerfiles", path.join(os.projectdir(), "src/(" .. relative .. ")"))
                end
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
        if role == "kernel" then
            add_defines("LL_EXPORT")
            add_packages("levilamina-leveldb")
        else
            add_deps("LeviLamina")
        end
        if is_mode("debug") then add_defines("LL_DEBUG") end
        set_symbols("debug")
        set_strip("none")
        set_configdir("$(builddir)/config")
        add_configfiles(path.join(os.projectdir(), "src/(ll/core/Version.h.in)"))
        add_includedirs("$(builddir)/config")
        add_syslinks("log", "preloader")
        before_link(function(target)
            import("core.base.json")
            local args = {"-X", "utf8", path.join(os.projectdir(), "scripts/android_kernel_link.py"),
                "--stage", "prepare",
                "--inputs", target:data("p7.inputs"), "--traces", target:data("p7.traces"),
                "--prelink-dir", target:data("p7.prelink"), "--elf", path.absolute(target:targetfile())}
            for _, object in ipairs(target:objectfiles()) do
                table.insert(args, "--object")
                table.insert(args, path.absolute(object))
            end
            local archives = {}
            for _, dep in ipairs(target:orderdeps()) do
                if dep:kind() == "static" then table.insert(archives, dep:targetfile()) end
            end
            for _, pkg in ipairs(target:orderpkgs()) do
                for _, archive in ipairs(table.wrap(pkg:get("libfiles"))) do
                    if archive:endswith(".a") then table.insert(archives, archive) end
                end
            end
            for _, archive in ipairs(table.unique(archives)) do
                table.insert(args, "--archive")
                table.insert(args, path.absolute(archive))
            end
            os.vrunv("python", args)
            local inputs = json.loadfile(target:data("p7.inputs"))
            local generated = path.join(target:data("p7.prelink"), "generated")
            local exports = path.join(os.projectdir(), "scripts/xmake",
                role == "kernel" and "android-kernel.exports" or "android-example.exports")
            target:add("linkdirs", path.directory(inputs.inputs.provider))
            target:add("shflags", "-Wl,-z,defs", "-Wl,-z,max-page-size=16384",
                "-Wl,-z,common-page-size=16384", "-Wl,--build-id=sha1",
                "-Wl,-soname," .. inputs.package.entry, "-Wl,--version-script=" .. path.relative(exports, os.projectdir()),
                "-Wl,--whole-archive", path.relative(path.join(generated, "libbedrock_runtime_thunks.a"), os.projectdir()),
                "-Wl,--no-whole-archive", "-Wl,--no-as-needed", {force = true})
        end)
        after_link(function(target)
            os.vrunv("python", {"-X", "utf8", path.join(os.projectdir(), "scripts/android_kernel_link.py"),
                "--stage", "verify", "--inputs", target:data("p7.inputs"),
                "--traces", target:data("p7.traces"), "--prelink-dir", target:data("p7.prelink"),
                "--elf", path.absolute(target:targetfile())})
        end)
    target_end()
end

target("LeviLaminaAndroidFoundation")
    set_kind("static")
    shared_options()
    add_defines("LL_EXPORT")
    for _, source in ipairs({"src/ll/core/mod/ModLoadPlanner.cpp", "src/ll/api/service/GamingStatus.cpp",
        "src/ll/api/Expected.cpp", "src/ll/api/i18n/I18n.cpp", "src/ll/api/reflection/ReflectionError.cpp",
        "src/ll/api/utils/ErrorUtils.cpp", "src/ll/api/utils/SystemUtils.cpp",
        "src/ll/api/utils/FromChars.cpp"}) do
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

target("P7CallbackTests")
    set_kind("binary")
    shared_options()
    add_files(path.join(os.projectdir(), "test/android/shared_core/callback_tests.cpp"))
    add_undefines("NDEBUG")
target_end()

target("P7ModuleFileTests")
    set_default(false)
    set_kind("binary")
    set_languages("c++23")
    set_exceptions("cxx")
    add_includedirs(path.join(os.projectdir(), "src-client"))
    add_files(path.join(os.projectdir(), "test/android/shared_core/module_files_io_tests.cpp"),
              path.join(os.projectdir(), "src-client/ll/core/mod/ModuleFiles.cpp"))
    add_syslinks("dl")
    add_ldflags("-Wl,-z,defs", "-Wl,-z,max-page-size=16384",
                "-Wl,--wrap=read,--wrap=pread,--wrap=fstat,--wrap=fsync", {force = true})
target_end()

target("P7ElfModuleTests")
    set_kind("binary")
    shared_options()
    add_files(path.join(os.projectdir(), "test/android/shared_core/elf_module_tests.cpp"),
              path.join(os.projectdir(), "src-client/ll/core/mod/ElfModule.cpp"))
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

target("P7KeyValueDBTests")
    set_kind("binary")
    shared_options()
    add_packages("levilamina-leveldb", "gtest")
    add_files(path.join(os.projectdir(), "src/ll/api/data/KeyValueDB.cpp"),
              path.join(os.projectdir(), "src-test/common/KeyValueDBTest.cpp"))
target_end()

target("P7InplaceExecutorTests")
    set_kind("binary")
    shared_options()
    add_packages("gtest")
    add_files(path.join(os.projectdir(), "src/ll/api/thread/InplaceExecutor.cpp"),
              path.join(os.projectdir(), "src-test/common/InplaceExecutorTest.cpp"))
target_end()

target("P7ServiceTests")
    set_kind("binary")
    shared_options()
    add_deps("LeviLamina")
    add_packages("gtest")
    add_files(path.join(os.projectdir(), "test/android/shared_core/service_tests.cpp"))
target_end()
