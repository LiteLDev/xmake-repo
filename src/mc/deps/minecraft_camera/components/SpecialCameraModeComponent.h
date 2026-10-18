#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
class SpecialCameraModeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mTripodCameraModeEnabled;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SpecialCameraModeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mTripodCameraModeEnabled;
    // NOLINTEND
};
#else // @header-generator platform
class SpecialCameraModeComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
