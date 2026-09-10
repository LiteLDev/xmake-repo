#pragma once
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace ll::android {
struct ElfModule {
    struct Import {
        std::string name;
        bool        weak{};
    };
    struct Range {
        uint64_t address, size;
        uint32_t flags;
    };
    std::string              soname;
    std::string              prelinkNote;
    std::vector<std::string> needed;
    std::vector<Import>      imports;
    std::vector<Range>       ranges;
};
// The runtime check complements the mandatory producer-side P5 verification.
bool inspectElfModule(
    std::span<uint8_t const> bytes,
    bool                     kernel,
    std::string_view         expectedSoname,
    std::string_view         expectedNote,
    ElfModule&               result,
    char const*&             error
) noexcept;
} // namespace ll::android
