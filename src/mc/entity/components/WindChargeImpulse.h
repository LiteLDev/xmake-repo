#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WindChargeImpulse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mDoSendAwardAchievement;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk75c12e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WindChargeImpulse& operator=(WindChargeImpulse const&);
    WindChargeImpulse(WindChargeImpulse const&);
    WindChargeImpulse();
#endif // @header-generator platform
};
