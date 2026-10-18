#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/rendering/BufferClearFlags.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
struct BufferClear {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::dragon::rendering::BufferClearFlags> mBufferClearMask;
    ::ll::TypedStorage<4, 4, uint>                                  mColor;
    ::ll::TypedStorage<4, 4, float>                                 mDepth;
    ::ll::TypedStorage<1, 1, uchar>                                 mStencilRef;
    // NOLINTEND
};
#else // @header-generator platform
struct BufferClear {};
#endif // @header-generator platform

} // namespace dragon::rendering
