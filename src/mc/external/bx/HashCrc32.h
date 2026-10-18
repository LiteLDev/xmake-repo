#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

class HashCrc32 {
public:
    // HashCrc32 inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Enum : int {
        Ieee       = 0,
        Castagnoli = 1,
        Koopman    = 2,
        Count      = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint const*> m_table;
    ::ll::TypedStorage<4, 4, uint>        m_hash;
    // NOLINTEND
#else // @header-generator platform
    enum class Enum : int {};
#endif // @header-generator platform
};

} // namespace bx
#endif // @header-generator platform
