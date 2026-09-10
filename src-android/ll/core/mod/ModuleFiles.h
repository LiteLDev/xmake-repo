#pragma once
#include <cstdint>
#include <span>
#include <string>
#include <string_view>

namespace ll::android {
class ModuleFile final {
public:
    ModuleFile() = default;
    ~ModuleFile();
    ModuleFile(ModuleFile const&)                         = delete;
    ModuleFile&              operator=(ModuleFile const&) = delete;
    bool                     open(std::string const& path) noexcept;
    std::span<uint8_t const> bytes() const noexcept { return {static_cast<uint8_t const*>(mapping), size}; }

private:
    void*  mapping{};
    size_t size{};
};
bool readManifestFile(std::string const& directory, std::string& content) noexcept;
bool makeModDataDirectories(std::string const& directory) noexcept;
bool preparePrivateGeneration(void const* selfSymbol, std::string& selfPath, std::string& generation) noexcept;
bool copyModToCache(
    std::string const& source,
    std::string_view   entry,
    std::string_view   canonicalId,
    std::string_view   manifest,
    std::string const& generation,
    std::string&       copied
) noexcept;
} // namespace ll::android
