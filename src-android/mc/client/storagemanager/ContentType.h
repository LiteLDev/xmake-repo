#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StorageManager {

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

}
