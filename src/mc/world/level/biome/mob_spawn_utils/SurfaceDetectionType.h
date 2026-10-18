#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobSpawnUtils {

enum class SurfaceDetectionType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    AIR_OR_LIQUID_TO_SOLID_BLOCKING = 0,
    NO_COLLISION_TO_FULL_UP_SUPPORT = 1,
#else // @header-generator platform
    AirOrLiquidToSolidBlocking = 0,
    NoCollisionToFullUpSupport = 1,
#endif // @header-generator platform
};

}
