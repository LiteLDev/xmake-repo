#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/camera/RotationSpace.h"

namespace MinecraftCamera {

struct CameraThirdPersonBoomComponent {
public:
    // CameraThirdPersonBoomComponent inner types define
    using RotationSpace = ::SharedTypes::v1_21_100::RotationSpace;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                   mStartingRadius;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mStartingOrientation;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::glm::vec2>                             mStartingOrientation;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_100::RotationSpace> mRotSpace;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CameraThirdPersonBoomComponent& operator=(CameraThirdPersonBoomComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace MinecraftCamera
