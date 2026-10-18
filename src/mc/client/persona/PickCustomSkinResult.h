#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PickCustomSkinResult : int {
    Success         = 0,
    FailTextureLoad = 1,
    FailFile        = 2,
    Canceled        = 3,
};
#else // @header-generator platform
enum class PickCustomSkinResult : int {};
#endif // @header-generator platform
