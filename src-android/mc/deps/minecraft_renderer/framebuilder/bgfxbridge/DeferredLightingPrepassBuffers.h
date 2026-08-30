#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/BindFramebufferColor.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { class RenderContext; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

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

} // namespace mce::framebuilder::bgfxbridge
