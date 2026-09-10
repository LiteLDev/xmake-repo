#pragma once
#include <string>
#include <string_view>

namespace ll::android {
struct ModManifest {
    std::string name;
    std::string canonicalId;
    std::string version;
    std::string entry;
};
enum class ManifestResult { Native, SkipType, Invalid, Incompatible };
ManifestResult parseModManifest(std::string_view json, ModManifest& output) noexcept;
} // namespace ll::android
