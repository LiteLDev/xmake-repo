#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Paddle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>   mOldPressTime;
    ::ll::TypedStorage<4, 4, int>   mPressTime;
    ::ll::TypedStorage<4, 4, float> mOldRowingTime;
    ::ll::TypedStorage<4, 4, float> mRowingTime;
    ::ll::TypedStorage<4, 4, float> mForce;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk5ae1f9;
    ::ll::UntypedStorage<4, 4> mUnkfb7ec0;
    ::ll::UntypedStorage<4, 4> mUnk18a94c;
    ::ll::UntypedStorage<4, 4> mUnkee9125;
    ::ll::UntypedStorage<4, 4> mUnkba45b8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Paddle& operator=(Paddle const&);
    Paddle(Paddle const&);
    Paddle();
#endif // @header-generator platform
};
