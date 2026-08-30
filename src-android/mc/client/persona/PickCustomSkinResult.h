#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PickCustomSkinResult : int {
    Success         = 0,
    FailTextureLoad = 1,
    FailFile        = 2,
    Canceled        = 3,
};
