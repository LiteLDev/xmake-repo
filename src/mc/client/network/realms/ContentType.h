#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ContentType : int {
    Unknown       = 0,
    BehaviorPack  = 1,
    ResourcePack  = 2,
    WorldTemplate = 3,
    Mashup        = 4,
};
#else // @header-generator platform
enum class ContentType : int {};
#endif // @header-generator platform

}
