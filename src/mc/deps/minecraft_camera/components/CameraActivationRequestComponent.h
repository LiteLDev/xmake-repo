#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraActivationRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mActivationPriority;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& CURRENT_PERSPECTIVE_OPTION_PRIORITY();

    MCNAPI static uint const& CURRENT_PRESET_INDEX_PRIORITY();

    MCNAPI static uint const& DEATH_CAMERA_PRIORITY();

    MCNAPI static uint const& TRIPOD_CAMERA_MODE_PRIORITY();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace MinecraftCamera
