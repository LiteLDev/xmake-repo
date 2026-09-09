#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Paddle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mOldPressTime;
    ::ll::TypedStorage<4, 4, int>   mPressTime;
    ::ll::TypedStorage<4, 4, float> mOldRowingTime;
    ::ll::TypedStorage<4, 4, float> mRowingTime;
    ::ll::TypedStorage<4, 4, float> mForce;
    // NOLINTEND
};
