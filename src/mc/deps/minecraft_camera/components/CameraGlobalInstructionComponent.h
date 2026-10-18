#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

namespace MinecraftCamera {

struct CameraGlobalInstructionComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<uint>> mPresetIndex;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mDelayPresetIndex;
    ::ll::TypedStorage<4, 4, ::EasingType>        mEasingType;
    ::ll::TypedStorage<4, 4, float>               mEasingTime;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mPresetIndex;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mDelayPresetIndex;
    ::ll::TypedStorage<4, 4, ::EasingType>          mEasingType;
    ::ll::TypedStorage<4, 4, float>                 mEasingTime;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace MinecraftCamera
