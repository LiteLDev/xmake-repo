#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/RenderCompute.h"
#include "mc/external/bgfx/RenderDraw.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
union RenderItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> draw;
    ::ll::UntypedStorage<4, 128> compute;
    // NOLINTEND
};
#else // @header-generator platform
union RenderItem {};
#endif // @header-generator platform
} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
