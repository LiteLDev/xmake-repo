#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerTickConfig {
public:
    // PlayerTickConfig inner types define
    enum class TickPolicy : uchar {
        Greedy    = 0,
        Throttled = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PlayerTickConfig::TickPolicy> mPolicy;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                          mMaxBatchedTicks;
    ::ll::TypedStorage<8, 8, ulong>                          mMaxCreditTicks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                         mMaxBatchedTicks;
    ::ll::TypedStorage<8, 8, uint64>                         mMaxCreditTicks;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                           mIsStrictMovement;
    ::ll::TypedStorage<1, 1, bool>                           mIsStrictDismount;
    ::ll::TypedStorage<1, 1, bool>                           mIsStrictEntityInteractions;
    // NOLINTEND
};
