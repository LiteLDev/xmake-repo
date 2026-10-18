#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct Rect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> m_x;
    ::ll::TypedStorage<2, 2, ushort> m_y;
    ::ll::TypedStorage<2, 2, ushort> m_width;
    ::ll::TypedStorage<2, 2, ushort> m_height;
    // NOLINTEND
};
#else // @header-generator platform
struct Rect {};
#endif // @header-generator platform

} // namespace bgfx
