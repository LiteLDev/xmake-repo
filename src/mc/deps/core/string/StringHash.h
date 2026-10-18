#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StringHash {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    uint mHash{2166136261u};

#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_hash;
    // NOLINTEND
#else // @header-generator platform
    template <size_t N>
    consteval StringHash(char const (&str)[N]) : StringHash(std::string_view{str}) {}
    constexpr StringHash(std::string_view str) {
        for (auto c : str) {
            mHash ^= c;
            mHash *= 16777619u;
        }
    }
    [[nodiscard]] uint hash() const { return mHash; }
    operator uint() const { return mHash; }
#endif // @header-generator platform
};
