#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/external/render_dragon/rendering/BufferClearFlags.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::modules {

#if defined(LL_PLAT_A) // @header-generator platform
struct ClearTaskContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 8>                                      mViewportRect;
    ::ll::TypedStorage<2, 2, ::dragon::rendering::BufferClearFlags> mBufferClearMask;
    // NOLINTEND
};
#else // @header-generator platform
struct ClearTaskContext {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules
