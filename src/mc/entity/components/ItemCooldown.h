#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemCooldown {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mTicksLeft;
    ::ll::TypedStorage<4, 4, int> mTotalTicks;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkd1085c;
    ::ll::UntypedStorage<4, 4> mUnk4b6336;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemCooldown& operator=(ItemCooldown const&);
    ItemCooldown(ItemCooldown const&);
    ItemCooldown();
#endif // @header-generator platform
};
