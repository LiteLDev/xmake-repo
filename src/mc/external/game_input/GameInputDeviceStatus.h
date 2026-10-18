#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameInput::v2 {

#if defined(LL_PLAT_C) // @header-generator platform
enum class GameInputDeviceStatus : int {
    GameInputDeviceNoStatus        = 0,
    GameInputDeviceConnected       = 1,
    GameInputDeviceHapticInfoReady = 2097152,
    GameInputDeviceAnyStatus       = -1,
};
#else // @header-generator platform
enum class GameInputDeviceStatus : int {};
#endif // @header-generator platform

}
#endif // @header-generator platform
