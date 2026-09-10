#include "ll/core/mod/ModManifest.h"
#include <array>
#include <rapidjson/document.h>

namespace ll::android {
namespace {
bool asciiName(std::string_view value, size_t maximum) noexcept {
    if (value.empty() || value.size() > maximum || value.front() == '.') return false;
    for (unsigned char ch : value) {
        if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_' || ch == '-'
              || ch == '.'))
            return false;
    }
    return true;
}
std::string_view string(rapidjson::Value const& value) noexcept { return {value.GetString(), value.GetStringLength()}; }
bool             field(rapidjson::Value const& root, char const* key, std::string_view& output) noexcept {
    auto found = root.FindMember(key);
    if (found == root.MemberEnd() || !found->value.IsString()) return false;
    output = string(found->value);
    return output.find('\0') == std::string_view::npos;
}
} // namespace
ManifestResult parseModManifest(std::string_view input, ModManifest& output) noexcept {
    output = {};
    if (input.empty() || input.size() > 65536 || input.find('\0') != std::string_view::npos)
        return ManifestResult::Invalid;
    rapidjson::Document document;
    document.Parse<rapidjson::kParseValidateEncodingFlag | rapidjson::kParseIterativeFlag>(input.data(), input.size());
    if (document.HasParseError() || !document.IsObject() || document.MemberCount() > 32) return ManifestResult::Invalid;
    std::array<std::string_view, 32> names;
    size_t                           count{};
    for (auto member = document.MemberBegin(); member != document.MemberEnd(); ++member) {
        auto key = string(member->name);
        if (key.find('\0') != std::string_view::npos) return ManifestResult::Invalid;
        for (size_t i = 0; i < count; ++i)
            if (names[i] == key) return ManifestResult::Invalid;
        names[count++] = key;
    }
    std::string_view type, name, version, entry;
    if (!field(document, "type", type)) return ManifestResult::Invalid;
    if (type != "native") return ManifestResult::SkipType;
    if (!field(document, "name", name) || !asciiName(name, 64) || !field(document, "version", version)
        || version.empty() || version.size() > 64 || !field(document, "entry", entry) || !asciiName(entry, 128)
        || !entry.ends_with(".so"))
        return ManifestResult::Invalid;
    if (entry == "libLeviLamina.so" || entry == "libpreloader.so" || entry == "libc++_shared.so")
        return ManifestResult::Invalid;
    auto abi = document.FindMember("android_mod_abi");
    if (abi == document.MemberEnd() || !abi->value.IsUint() || abi->value.GetUint() != 1)
        return ManifestResult::Incompatible;
    auto versions = document.FindMember("minecraft_versions");
    if (versions == document.MemberEnd() || !versions->value.IsArray() || versions->value.Size() > 16)
        return ManifestResult::Invalid;
    bool supported{};
    for (auto const& item : versions->value.GetArray()) {
        if (!item.IsString()) return ManifestResult::Invalid;
        supported |= string(item) == "1.26.40.5";
    }
    if (!supported) return ManifestResult::Incompatible;
    // P6 supports the kernel dependency only, not arbitrary Mod/helper-library graphs.
    for (auto key : {"dependencies", "optional_dependencies", "load_before", "conflicts"}) {
        if (document.HasMember(key)) return ManifestResult::Incompatible;
    }
    output.name        = name;
    output.canonicalId = name;
    for (auto& ch : output.canonicalId)
        if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
    if (output.canonicalId == "levilamina") return ManifestResult::Invalid;
    output.version = version;
    output.entry   = entry;
    return ManifestResult::Native;
}
} // namespace ll::android
