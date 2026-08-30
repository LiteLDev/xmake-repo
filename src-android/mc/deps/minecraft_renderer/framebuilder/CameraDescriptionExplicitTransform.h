#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Viewport.h"
#include "mc/deps/core_graphics/math/Rect.h"

namespace mce::framebuilder {

struct CameraDescriptionExplicitTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 8>                                            mViewport;
    ::ll::UntypedStorage<2, 8>                                            mScissorRect;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mViewMatrix;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mProjectionMatrix;
    // NOLINTEND
};

} // namespace mce::framebuilder
