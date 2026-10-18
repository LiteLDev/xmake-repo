#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Viewport.h"
#include "mc/deps/core_graphics/math/Rect.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraDescriptionOrthographic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 8>                                         mViewport;
    ::ll::UntypedStorage<2, 8>                                         mScissorRect;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mTarget;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mUp;
    ::ll::UntypedStorage<4, 16>                                        mProjectionBounds;
    ::ll::TypedStorage<4, 4, float>                                    mNearPlane;
    ::ll::TypedStorage<4, 4, float>                                    mFarPlane;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraDescriptionOrthographic {};
#endif // @header-generator platform

} // namespace mce::framebuilder
