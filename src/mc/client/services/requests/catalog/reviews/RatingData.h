#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct RatingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        mAverageRating;
    ::ll::TypedStorage<4, 4, int>          mTotalRatingsCount;
    ::ll::TypedStorage<8, 24, std::string> mDisplayRatingCount;
    // NOLINTEND

public:
    // prevent constructor by default
    RatingData();
};
#else // @header-generator platform
struct RatingData {};
#endif // @header-generator platform
