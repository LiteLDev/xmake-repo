#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/MatrixCache.h"
#include "mc/external/bgfx/RectCache.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Rect; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/MatrixCache.h"
#include "mc/external/bgfx/RectCache.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct FrameCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4194320> m_matrixCache;
    ::ll::UntypedStorage<4, 524304>  m_rectCache;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FrameCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4194320, ::bgfx::MatrixCache> m_matrixCache;
    ::ll::TypedStorage<4, 524304, ::bgfx::RectCache>    m_rectCache;
    // NOLINTEND
};
#else // @header-generator platform
struct FrameCache {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
