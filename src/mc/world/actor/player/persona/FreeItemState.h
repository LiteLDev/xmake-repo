#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct FreeItemState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsFreeItem;
    ::ll::TypedStorage<1, 1, bool> mIsAchievementItem;
    ::ll::TypedStorage<1, 1, bool> mIsRedeemable;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FreeItemState(bool, bool, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, bool, bool);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace persona
