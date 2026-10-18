#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/external/render_dragon/rendering/BufferClearFlags.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct BufferClearDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::dragon::rendering::BufferClearFlags> mBufferClearMask;
    ::ll::TypedStorage<4, 16, ::mce::Color>                         mColor;
    ::ll::TypedStorage<4, 4, float>                                 mDepth;
    ::ll::TypedStorage<1, 1, uchar>                                 mStencilRef;
    // NOLINTEND
};
#else // @header-generator platform
struct BufferClearDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
