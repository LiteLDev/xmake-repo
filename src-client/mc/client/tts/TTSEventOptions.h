#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TTSEventOptions {
public:
    // member variables
    // NOLINTBEGIN
    uint                                   mInterruptable : 1;
    ::ll::TypedStorage<8, 24, std::string> mInterruptibleId;
    uint                                   mDisregardAppFocus          : 1;
    uint                                   mRequired                   : 1;
    uint                                   mInterruptibleByFocusChange : 1;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
