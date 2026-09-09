#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Viewport.h"
#include "mc/deps/core_graphics/math/Rect.h"

namespace mce::framebuilder {

struct CameraDescriptionOrthographic2D {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 8>      mViewport;
    ::ll::UntypedStorage<2, 8>      mScissorRect;
    ::ll::UntypedStorage<4, 16>     mProjectionBounds;
    ::ll::TypedStorage<4, 4, float> mNearPlane;
    ::ll::TypedStorage<4, 4, float> mFarPlane;
    // NOLINTEND
};

} // namespace mce::framebuilder
