#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/catalog/reviews/RatingData.h"
#include "mc/client/services/requests/catalog/reviews/ReviewData.h"

struct ReviewSummaryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>   mItemId;
    ::ll::TypedStorage<4, 4, int>            mReviewsCount;
    ::ll::TypedStorage<8, 32, ::RatingData>  mRatingData;
    ::ll::TypedStorage<8, 224, ::ReviewData> mMostFavorable;
    ::ll::TypedStorage<8, 224, ::ReviewData> mMostCritical;
    // NOLINTEND
};
