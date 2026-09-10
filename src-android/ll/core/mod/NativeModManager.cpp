#include "ll/core/mod/NativeModManager.h"
#include "ll/core/mod/ElfModule.h"
#include "ll/core/mod/ModuleFiles.h"
#include <algorithm>
#include <array>
#include <bit>
#include <cstdio>
#include <cstring>
#include <dirent.h>
#include <dlfcn.h>
#include <limits>
#include <new>
#include <set>
#include <sys/stat.h>
#include <unistd.h>

namespace ll::android {
namespace {
std::string_view basename(char const* path) noexcept {
    if (!path) return {};
    auto* slash = std::strrchr(path, '/');
    return slash ? slash + 1 : path;
}
bool owns(void const* address, void const* base) noexcept {
    Dl_info info{};
    return address && ::dladdr(address, &info) && info.dli_fbase == base;
}
bool rangeContains(
    ElfModule const& image,
    void const*      base,
    void const*      pointer,
    size_t           size,
    uint32_t         flags
) noexcept {
    auto start = reinterpret_cast<uintptr_t>(base);
    auto value = reinterpret_cast<uintptr_t>(pointer);
    if (value < start) return false;
    uint64_t offset = value - start;
    for (auto range : image.ranges)
        if ((range.flags & flags) == flags && offset >= range.address && offset - range.address <= range.size
            && size <= range.size - (offset - range.address))
            return true;
    return false;
}
std::string canonical(std::string value) {
    for (auto& c : value)
        if (c >= 'A' && c <= 'Z') c += 'a' - 'A';
    return value;
}
bool mapped(std::string_view name) noexcept {
    FILE* maps = std::fopen("/proc/self/maps", "r");
    if (!maps) return true; // cannot establish cold load
    char line[8192];
    bool found{};
    while (std::fgets(line, sizeof(line), maps)) {
        std::string_view file = basename(line);
        auto             end  = file.find_first_of("\r\n ");
        file                  = file.substr(0, end);
        if (file == name) {
            found = true;
            break;
        }
    }
    std::fclose(maps);
    return found;
}
bool approvedImports(ElfModule const& elf, void const* kernelBase) noexcept {
    std::vector<void*> dependencies;
    for (auto const& name : elf.needed) {
        void* handle = ::dlopen(name.c_str(), RTLD_NOW | RTLD_LOCAL | RTLD_NOLOAD);
        if (!handle) {
            for (auto value : dependencies) ::dlclose(value);
            return false;
        }
        dependencies.push_back(handle);
    }
    bool valid = true;
    for (auto const& symbol : elf.imports) {
        void* resolved{};
        for (auto handle : dependencies) {
            resolved = ::dlsym(handle, symbol.name.c_str());
            if (resolved) break;
        }
        if (!resolved && symbol.weak) continue;
        Dl_info info{};
        if (!resolved || !::dladdr(resolved, &info)) {
            valid = false;
            break;
        }
        auto file = basename(info.dli_fname);
        if (std::find(elf.needed.begin(), elf.needed.end(), file) == elf.needed.end()) {
            // Transitive system dependencies are also permitted, but never MC.
            if (file != "libc.so" && file != "libm.so" && file != "libdl.so" && file != "liblog.so"
                && file != "libc++_shared.so" && file != "libpreloader.so" && file != "libLeviLamina.so") {
                valid = false;
                break;
            }
        }
        if (symbol.name.starts_with("LLAndroidKernel_") && info.dli_fbase != kernelBase) {
            valid = false;
            break;
        }
    }
    for (auto handle : dependencies) ::dlclose(handle);
    return valid;
}
struct Candidate {
    ModManifest manifest;
    std::string directory, raw, cached;
    ElfModule   elf;
    bool        rejected{};
};
} // namespace
void NativeModManager::diagnostic(std::string_view id, std::string_view reason) noexcept {
    char text[512];
    int  size = std::snprintf(
        text,
        sizeof(text),
        "LeviLamina Mod %.*s: %.*s",
        static_cast<int>(std::min(id.size(), size_t{64})),
        id.data(),
        static_cast<int>(std::min(reason.size(), size_t{384})),
        reason.data()
    );
    if (size > 0 && static_cast<size_t>(size) < sizeof(text))
        logger.write(LLAndroidLog_Error, text, static_cast<size_t>(size));
}
bool NativeModManager::prepare() noexcept {
    if (!registry.clean() || currentOwner().callbackToken) return false;
    auto view = context.view();
    auto root = view.identityAndPaths[1];
    auto end  = root.rfind('/');
    if (end == std::string_view::npos
        || !preparePrivateGeneration(std::bit_cast<void*>(&LLAndroidKernel_GetApiVersion), selfPath, generation))
        return false;
    sourceRoot = root.substr(0, end);
    ModuleFile  self;
    ElfModule   information;
    char const* error{};
    if (!self.open(selfPath) || !inspectElfModule(self.bytes(), true, "libLeviLamina.so", {}, information, error))
        return false;
    selfNote      = std::move(information.prelinkNote);
    loadAttempted = false;
    return true;
}
bool NativeModManager::loadAllMods() noexcept {
    if (loadAttempted || generation.empty() || currentOwner().callbackToken) return false;
    loadAttempted  = true;
    DIR* directory = ::opendir(sourceRoot.c_str());
    if (!directory) {
        diagnostic("discovery", "source directory unavailable");
        return false;
    }
    std::vector<Candidate> candidates;
    while (auto* item = ::readdir(directory)) {
        std::string_view name(item->d_name);
        if (name == "." || name == "..") continue;
        auto        path = sourceRoot + '/' + std::string(name);
        struct stat info{};
        if (::lstat(path.c_str(), &info) || !S_ISDIR(info.st_mode)) continue;
        Candidate candidate;
        candidate.directory = std::move(path);
        if (!readManifestFile(candidate.directory, candidate.raw)) continue;
        auto parsed = parseModManifest(candidate.raw, candidate.manifest);
        if (parsed == ManifestResult::SkipType) continue;
        if (parsed != ManifestResult::Native) {
            diagnostic(name, "manifest/ABI/version rejected");
            continue;
        }
        candidates.push_back(std::move(candidate));
    }
    ::closedir(directory);
    std::sort(candidates.begin(), candidates.end(), [](auto const& a, auto const& b) {
        return a.manifest.canonicalId < b.manifest.canonicalId;
    });
    for (size_t a = 0; a < candidates.size(); ++a) {
        for (size_t b = a + 1; b < candidates.size(); ++b) {
            if (candidates[a].manifest.canonicalId == candidates[b].manifest.canonicalId
                || canonical(candidates[a].manifest.entry) == canonical(candidates[b].manifest.entry))
                candidates[a].rejected = candidates[b].rejected = true;
        }
    }
    Dl_info kernel{};
    if (!::dladdr(std::bit_cast<void*>(&LLAndroidKernel_GetApiVersion), &kernel)) return false;
    for (auto& candidate : candidates) {
        auto& manifest = candidate.manifest;
        if (candidate.rejected) {
            diagnostic(manifest.name, "duplicate ID/entry rejected");
            continue;
        }
        if (!copyModToCache(
                candidate.directory,
                manifest.entry,
                manifest.canonicalId,
                candidate.raw,
                generation,
                candidate.cached
            )) {
            diagnostic(manifest.name, "private cache copy or byte verification failed");
            continue;
        }
        {
            // Inspection maps the file read-only. Release that mapping before
            // proving the shared object has never been loaded in this process.
            ModuleFile  image;
            char const* error{};
            if (!image.open(candidate.cached)
                || !inspectElfModule(image.bytes(), false, manifest.entry, selfNote, candidate.elf, error)) {
                diagnostic(manifest.name, error ? error : "ELF file unavailable");
                continue;
            }
        }
        if (!approvedImports(candidate.elf, kernel.dli_fbase)) {
            diagnostic(manifest.name, "dependency binding rejected");
            continue;
        }
        if (!makeModDataDirectories(candidate.directory) || nextOwner == std::numeric_limits<uint64_t>::max()) {
            diagnostic(manifest.name, "context directory or owner capacity unavailable");
            continue;
        }
        auto entry = std::unique_ptr<NativeModEntry>(new (std::nothrow) NativeModEntry);
        if (!entry) {
            diagnostic(manifest.name, "entry allocation failed");
            continue;
        }
        if (mapped(manifest.entry)) {
            diagnostic(manifest.name, "entry already mapped; cold load rejected");
            continue;
        }
        // Constructors have no LL owner context: only lifecycle/dispatch invokes
        // code with subscription authority. No Java preload participates here.
        void* handle = ::dlopen(candidate.cached.c_str(), RTLD_NOW | RTLD_LOCAL);
        if (!handle) {
            auto message = ::dlerror();
            diagnostic(
                manifest.name,
                message && std::strstr(message, "symbol")      ? "dlopen symbol missing"
                : message && std::strstr(message, "not found") ? "dlopen dependency missing"
                                                               : "dlopen path/namespace failure"
            );
            continue;
        }
        auto    address = ::dlsym(handle, "LLGetModRegistration");
        Dl_info loaded{};
        if (!address || !::dladdr(address, &loaded) || !loaded.dli_fname || candidate.cached != loaded.dli_fname) {
            ::dlclose(handle);
            diagnostic(manifest.name, "registration entry ownership rejected");
            continue;
        }
        auto getRegistration = std::bit_cast<LLAndroidModRegistrationV1 const* (*)() noexcept>(address);
        auto table           = getRegistration();
        bool valid           = owns(table, loaded.dli_fbase)
                  && rangeContains(candidate.elf, loaded.dli_fbase, table, sizeof(*table), 4)
                  && table->size == sizeof(*table) && table->abiVersion == 1 && table->requiredKernelApiVersion == 1
                  && !table->reserved && table->instance;
        if (valid)
            for (auto callback : {table->load, table->enable, table->disable, table->unload})
                valid = owns(std::bit_cast<void*>(callback), loaded.dli_fbase)
                     && rangeContains(candidate.elf, loaded.dli_fbase, std::bit_cast<void*>(callback), 1, 1) && valid;
        if (!valid) {
            ::dlclose(handle);
            diagnostic(manifest.name, "registration ABI/callback ownership rejected");
            continue;
        }
        entry->manifest  = manifest;
        entry->root      = candidate.directory;
        entry->data      = entry->root + "/data";
        entry->config    = entry->root + "/config";
        entry->resources = entry->root + "/resources";
        entry->cached    = candidate.cached;
        entry->owner.id  = nextOwner++;
        entry->context   = {
            sizeof(entry->context),
            1,
            context.view().javaVm,
            entry->manifest.name.c_str(),
            entry->root.c_str(),
            entry->data.c_str(),
            entry->config.c_str(),
            entry->resources.c_str()
        };
        entry->registration = table;
        entry->handle       = handle;
        entry->close        = ::dlclose;
        registry.loadAndEnable(std::move(entry));
    }
    return !registry.hasRetainedFailure();
}
void NativeModManager::reset() noexcept {
    if (!registry.clean()) return;
    sourceRoot.clear();
    generation.clear();
    selfPath.clear();
    selfNote.clear();
    loadAttempted = false;
}
} // namespace ll::android
