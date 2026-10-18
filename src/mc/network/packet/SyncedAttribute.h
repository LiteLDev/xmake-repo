#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedAttribute {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 4, float>        mMinValue;
    ::ll::TypedStorage<4, 4, float>        mCurrentValue;
    ::ll::TypedStorage<4, 4, float>        mMaxValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<4, 4, float>          mMinValue;
    ::ll::TypedStorage<4, 4, float>          mCurrentValue;
    ::ll::TypedStorage<4, 4, float>          mMaxValue;
#endif // @header-generator platform
    // NOLINTEND
};
