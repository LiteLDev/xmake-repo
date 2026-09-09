#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
