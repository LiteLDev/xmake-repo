#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct TargetCameraRotationSpeedComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mCameraRotationSpeed;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TargetCameraRotationSpeedComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mCameraRotationSpeed;
    // NOLINTEND
};
#else // @header-generator platform
struct TargetCameraRotationSpeedComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
