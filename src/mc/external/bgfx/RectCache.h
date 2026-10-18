#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Rect.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Rect.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct RectCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 524288, ::bgfx::Rect[65536]> m_cache;
    ::ll::TypedStorage<4, 4, uint>                     m_num;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RectCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 524288, ::bgfx::Rect[65536]> m_cache;
    ::ll::TypedStorage<4, 4, uint>                     m_num;
    // NOLINTEND
};
#else // @header-generator platform
struct RectCache {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
