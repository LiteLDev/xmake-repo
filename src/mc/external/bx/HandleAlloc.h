#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class HandleAlloc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> m_numHandles;
    ::ll::TypedStorage<2, 2, ushort> m_maxHandles;
    // NOLINTEND
};
#else // @header-generator platform
class HandleAlloc {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
