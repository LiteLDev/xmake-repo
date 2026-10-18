#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniformBits {
public:
    // member variables
    // NOLINTBEGIN
    bool mIsHurt                     : 1;
    bool mIsOnFire                   : 1;
    bool mIsHighlighted              : 1;
    bool mHasChangeColor             : 1;
    bool mHasMultiplicitiveTintColor : 1;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ActorUniformBits {
public:
    // member variables
    // NOLINTBEGIN
    bool mIsHurt                     : 1;
    bool mIsOnFire                   : 1;
    bool mIsHighlighted              : 1;
    bool mHasChangeColor             : 1;
    bool mHasMultiplicitiveTintColor : 1;
    // NOLINTEND
};
#else // @header-generator platform
struct ActorUniformBits {};
#endif // @header-generator platform
#endif // @header-generator platform
