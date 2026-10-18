#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/BindFramebufferColor.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { class RenderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
struct DeferredLightingPrepassBuffers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mLightingBuffersInitialized;
    ::ll::TypedStorage<1, 1, bool> mTilingBuffersInitialized;
    ::ll::UntypedStorage<8, 32>    mDiffuseLightingRaster;
    ::ll::UntypedStorage<8, 32>    mSpecularLightingRaster;
    ::ll::UntypedStorage<8, 32>    mLightingNormalsAndDepth;
    ::ll::UntypedStorage<8, 32>    mTileInfoBuffer;
    // NOLINTEND
};
#else // @header-generator platform
struct DeferredLightingPrepassBuffers {};
#endif // @header-generator platform

} // namespace mce::framebuilder::bgfxbridge
