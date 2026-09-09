#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class V2TempComponentRequirements : uchar {
    // bitfield representation
    None              = 0,
    Unsupported       = 1 << 0,
    ActorMatrix       = 1 << 1,
    ModelPartsUpdated = 1 << 2,
    SetupShading      = 1 << 3,
};
