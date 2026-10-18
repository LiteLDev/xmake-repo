#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class WorldJoinedRecordType : int {
    singleplayer = 0,
    multiplayer  = 1,
    realms       = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class WorldJoinedRecordType : int {
    Singleplayer = 0,
    Multiplayer  = 1,
    Realms       = 2,
};
#else // @header-generator platform
enum class WorldJoinedRecordType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
