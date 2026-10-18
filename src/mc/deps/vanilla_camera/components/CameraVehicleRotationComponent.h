#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraVehicleRotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLastVehicleRotationRadians;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraVehicleRotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLastVehicleRotationRadians;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraVehicleRotationComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace VanillaCamera
