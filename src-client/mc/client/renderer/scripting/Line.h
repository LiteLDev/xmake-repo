#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Line {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mLeftSideLabel;
    ::ll::TypedStorage<8, 24, std::string> mClarityFudge;
    ::ll::TypedStorage<8, 24, std::string> mRightSideLow;
    ::ll::TypedStorage<8, 24, std::string> mRightSideMid;
    ::ll::TypedStorage<8, 24, std::string> mRightSideHigh;
    ::ll::TypedStorage<8, 24, std::string> mRightSideRecent;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
