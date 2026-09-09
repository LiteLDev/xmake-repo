#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 4, float>        mMinValue;
    ::ll::TypedStorage<4, 4, float>        mCurrentValue;
    ::ll::TypedStorage<4, 4, float>        mMaxValue;
    // NOLINTEND
};
