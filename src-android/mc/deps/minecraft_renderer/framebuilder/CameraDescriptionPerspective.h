#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Viewport.h"
#include "mc/deps/core_graphics/math/Rect.h"

namespace mce::framebuilder {

struct CameraDescriptionPerspective {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 8>                                         mViewport;
    ::ll::UntypedStorage<2, 8>                                         mScissorRect;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mTarget;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mUp;
    ::ll::TypedStorage<4, 4, float>                                    mFovInDegrees;
    ::ll::TypedStorage<4, 4, float>                                    mNearPlane;
    ::ll::TypedStorage<4, 4, float>                                    mFarPlane;
    // NOLINTEND
};

} // namespace mce::framebuilder
