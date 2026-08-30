#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/PassState.h"
#include "mc/external/render_dragon/frame_renderer/ViewDescription.h"

namespace dragon::framerenderer::drawutils {

struct DirectDrawContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 292, ::dragon::framerenderer::ViewDescription>    mViewDesc;
    ::ll::TypedStorage<4, 88, ::dragon::frameobject::components::PassState> mPassState;
    // NOLINTEND
};

} // namespace dragon::framerenderer::drawutils
