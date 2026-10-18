#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TrialUpgradePurchaseTier : int {
    FullGame          = 0,
    StarterCollection = 1,
    MasterCollection  = 2,
};
#else // @header-generator platform
enum class TrialUpgradePurchaseTier : int {};
#endif // @header-generator platform
