#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/SplitScreenDirection.h"

struct SplitScreenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                   mIsPrimaryUser;
    ::ll::TypedStorage<4, 4, int>                    mSplitScreenPosition;
    ::ll::TypedStorage<4, 4, int>                    mActivePlayers;
    ::ll::TypedStorage<4, 4, ::SplitScreenDirection> mSplitScreenDirection;
    // NOLINTEND
};
