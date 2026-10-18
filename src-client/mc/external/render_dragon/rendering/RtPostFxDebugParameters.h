#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/external/render_dragon/frame_renderer/modules/BufferDebugBlitMode.h"
#include "mc/external/render_dragon/rendering/RtDebugType.h"

namespace dragon::rendering {

struct RtPostFxDebugParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                         mDebugMode;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::RtDebugType>                              mType;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::postfx::BufferDebugBlitMode> mDebugBlitMode;
    ::ll::TypedStorage<4, 4, uint>                                                          mResourceIdx;
    ::ll::UntypedStorage<2, 8>                                                              mViewport;
    // NOLINTEND
};

} // namespace dragon::rendering
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
