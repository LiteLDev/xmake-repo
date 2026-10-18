#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraShakeSupportComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mFrequency;
    ::ll::TypedStorage<4, 4, float> mAmplitude;
    ::ll::TypedStorage<4, 4, float> mNoiseMultiplier;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraShakeSupportComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mFrequency;
    ::ll::TypedStorage<4, 4, float> mAmplitude;
    ::ll::TypedStorage<4, 4, float> mNoiseMultiplier;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraShakeSupportComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
