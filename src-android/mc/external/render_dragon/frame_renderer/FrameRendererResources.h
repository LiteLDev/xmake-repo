#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/MeshFilter.h"
#include "mc/external/render_dragon/rendering/ClipSpaceDepthMode.h"

namespace dragon::framerenderer {

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

} // namespace dragon::framerenderer
