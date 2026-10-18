#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::details {

#if defined(LL_PLAT_A) // @header-generator platform
struct BgfxBufferPoolDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mCount;
    ::ll::TypedStorage<4, 4, uint> mStride;
    // NOLINTEND
};
#else // @header-generator platform
struct BgfxBufferPoolDescription {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::details
