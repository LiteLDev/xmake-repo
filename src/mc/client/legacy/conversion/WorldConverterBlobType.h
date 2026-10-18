#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Legacy {

#if defined(LL_PLAT_A) // @header-generator platform
enum class WorldConverterBlobType : int {
    LevelData = 0,
    Region    = 1,
    Thumb     = 2,
};
#else // @header-generator platform
enum class WorldConverterBlobType : int {};
#endif // @header-generator platform

}
