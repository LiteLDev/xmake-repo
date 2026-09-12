#include "ll/core/mod/NativeModPlatform.h"

#include "ElfModule.h"
#include "ModuleFiles.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/reflection/Serialization.h"
#include "nlohmann/json.hpp"

#include <dlfcn.h>
#include <stdexcept>

namespace ll::mod {
namespace {
struct NativeCache {
    std::string mSelfPath;
    std::string mGeneration;
    std::string mNote;

    NativeCache() {
        if (!android::preparePrivateGeneration(
                reinterpret_cast<void const*>(&prepareNativeMod),
                mSelfPath,
                mGeneration
            ))
            throw std::runtime_error("LL must be loaded from its owned application cache");
        android::ModuleFile file;
        android::ElfModule  info;
        char const*         error{};
        if (!file.open(mSelfPath)
            || !android::inspectElfModule(file.bytes(), true, "libLeviLamina.so", {}, info, error))
            throw std::runtime_error("invalid parent LL ELF/ABI identity");
        mNote = std::move(info.prelinkNote);
    }
};

bool sdkCompatible(Manifest const& manifest) {
    if (!manifest.extraInfo) return false;
    auto matches = [&](std::string_view key, std::string_view value) {
        auto found = manifest.extraInfo->find(key);
        return found != manifest.extraInfo->end() && found->second == value;
    };
    return matches("os", "android") && matches("arch", "arm64-v8a") && matches("sdkAbi", "p7-cxx23-exceptions-rtti-v1");
}
} // namespace

Expected<std::filesystem::path> prepareNativeMod(Manifest const& manifest, std::filesystem::path const& directory) try {
    if (!sdkCompatible(manifest))
        return makeI18nStringError<"Mod {0} has an incompatible Android SDK ABI">(manifest.name);
    static NativeCache cache;
    std::string        sourceManifest;
    if (!android::readManifestFile(directory.string(), sourceManifest))
        return makeI18nStringError<"Cannot read native Mod manifest: {0}">(manifest.name);
    // Use the original serializer/parser to compare the discovery snapshot with
    // the copied manifest; do not introduce another manifest interpretation.
    auto current = reflection::deserialize_to<Manifest>(nlohmann::json::parse(sourceManifest));
    if (!current) return forwardError(current.error());
    auto discoveredJson = reflection::serialize<nlohmann::json>(manifest);
    auto currentJson    = reflection::serialize<nlohmann::json>(*current);
    if (!discoveredJson) return forwardError(discoveredJson.error());
    if (!currentJson) return forwardError(currentJson.error());
    if (*discoveredJson != *currentJson)
        return makeI18nStringError<"Mod manifest changed after discovery: {0}">(manifest.name);

    std::string copied;
    std::string copyError;
    if (!android::copyModToCache(
            directory.string(),
            manifest.entry,
            manifest.name,
            sourceManifest,
            cache.mGeneration,
            copied,
            &copyError
        ))
        return makeI18nStringError<"Cannot prepare private native Mod copy {0}: {1}">(manifest.name, copyError);
    android::ModuleFile file;
    android::ElfModule  info;
    char const*         error{};
    if (!file.open(copied) || !android::inspectElfModule(file.bytes(), false, manifest.entry, cache.mNote, info, error))
        return makeI18nStringError<"Invalid native Mod ELF or runtime identity {0}: {1}">(
            manifest.name,
            error ? error : "cannot open cache file"
        );

    // A temporary lookup reference is distinct from the parent's owning PL
    // reference. Restrict imports to the parent's SDK dependency scope.
    auto parent =
        std::unique_ptr<void, int (*)(void*)>(::dlopen(cache.mSelfPath.c_str(), RTLD_NOW | RTLD_NOLOAD), &::dlclose);
    if (!parent) return makeI18nStringError<"Cannot inspect parent SDK imports for {0}">(manifest.name);
    for (auto const& import : info.imports) {
        if (!import.weak && !::dlsym(parent.get(), import.name.c_str()))
            return makeI18nStringError<"Native Mod {0} requires an unavailable SDK import: {1}">(
                manifest.name,
                import.name
            );
    }
    return std::filesystem::path(copied);
} catch (...) {
    return makeExceptionError();
}

} // namespace ll::mod
