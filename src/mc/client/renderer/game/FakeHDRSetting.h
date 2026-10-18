#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class FakeHDRSetting : int {
    EnableFakeHDR  = 0,
    DisableFakeHDR = 1,
};
#else // @header-generator platform
enum class FakeHDRSetting : int {};
#endif // @header-generator platform
