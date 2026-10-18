#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StorageManager {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ContentType : uchar {
    World                = 0,
    WorldTemplate        = 1,
    ResourcePack         = 2,
    BehaviorPack         = 3,
    Cache                = 4,
    LegacyWorld          = 5,
    RetailToPreviewWorld = 6,
    Count                = 7,
};
#else // @header-generator platform
enum class ContentType : uchar {};
#endif // @header-generator platform

}
