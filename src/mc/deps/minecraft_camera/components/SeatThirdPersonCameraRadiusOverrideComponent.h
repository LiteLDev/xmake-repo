#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct SeatThirdPersonCameraRadiusOverrideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mValue;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SeatThirdPersonCameraRadiusOverrideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mValue;
    // NOLINTEND
};
#else // @header-generator platform
struct SeatThirdPersonCameraRadiusOverrideComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
