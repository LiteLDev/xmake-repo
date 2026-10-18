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
    ::ll::TypedStorage<4, 4, uint> m_hash{2166136261u};
    // NOLINTEND
#endif // @header-generator platform
    template <size_t N>
    consteval StringHash(char const (&str)[N]) : StringHash(std::string_view{str}) {}
    constexpr StringHash(std::string_view str) {
        uint value{2166136261u};
        for (auto c : str) {
            value ^= c;
            value *= 16777619u;
        }
#if defined(LL_PLAT_A)
        m_hash = value;
#else
        mHash = value;
#endif
    }
    [[nodiscard]] uint hash() const {
#if defined(LL_PLAT_A)
        return m_hash;
#else
        return mHash;
#endif
    }
    operator uint() const { return hash(); }
};
