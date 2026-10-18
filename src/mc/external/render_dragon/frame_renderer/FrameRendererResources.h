#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/MeshFilter.h"
#include "mc/external/render_dragon/rendering/ClipSpaceDepthMode.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
struct FrameRendererResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::dragon::rendering::ClipSpaceDepthMode>        mClipSpaceMode;
    ::ll::TypedStorage<8, 96, ::dragon::frameobject::components::MeshFilter> mScreenQuadFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameRendererResources& operator=(FrameRendererResources const&);
    FrameRendererResources(FrameRendererResources const&);
    FrameRendererResources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FrameRendererResources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct FrameRendererResources {};
#endif // @header-generator platform

} // namespace dragon::framerenderer
