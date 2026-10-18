#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
class CameraTimeOverrideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetDeltaTimeOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraTimeOverrideComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<float> getDeltaTimeOverride() const;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class CameraTimeOverrideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<float()>> mGetDeltaTimeOverride;
    // NOLINTEND
};
#else // @header-generator platform
class CameraTimeOverrideComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
