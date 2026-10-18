#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraPresetComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mPresetIndex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mPresetIndex;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace MinecraftCamera
