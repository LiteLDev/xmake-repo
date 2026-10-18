#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DayCycleEventComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                      mPrevTick;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>> mListeningTimeTicks;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                        mPrevTick;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>> mListeningTimeTicks;
#endif // @header-generator platform
    // NOLINTEND
};
