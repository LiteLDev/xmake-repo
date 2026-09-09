#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockClientPredictionOverrides : uchar {
    BlockPlayerInteract = 0,
    BlockPlayerPlacing  = 1,
    _Count              = 7,
};
