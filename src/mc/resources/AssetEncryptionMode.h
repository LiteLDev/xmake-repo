#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AssetEncryptionMode : uchar {
    Cfb = 0,
    Ctr = 1,
};
#endif // @header-generator platform
