#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class ContentType : int {
    Unknown       = 0,
    BehaviorPack  = 1,
    ResourcePack  = 2,
    WorldTemplate = 3,
    Mashup        = 4,
};

}
