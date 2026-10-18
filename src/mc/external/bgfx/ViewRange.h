#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_C) // @header-generator platform
struct ViewRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> m_view;
    ::ll::TypedStorage<1, 1, uchar>  m_skipReset;
    ::ll::TypedStorage<4, 4, uint>   m_startIndex;
    ::ll::TypedStorage<4, 4, uint>   m_count;
    // NOLINTEND
};
#else // @header-generator platform
struct ViewRange {};
#endif // @header-generator platform

} // namespace bgfx
#endif // @header-generator platform
