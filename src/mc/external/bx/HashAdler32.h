#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class HashAdler32 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_a;
    ::ll::TypedStorage<4, 4, uint> m_b;
    // NOLINTEND
};
#else // @header-generator platform
class HashAdler32 {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
