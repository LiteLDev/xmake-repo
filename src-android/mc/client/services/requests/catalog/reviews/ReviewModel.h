#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/catalog/reviews/RatingData.h"

// auto generated forward declare list
// clang-format off
struct ReviewData;
struct ReviewSummaryData;
// clang-format on

class ReviewModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ReviewSummaryData>> mReviewSummary;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ReviewData>>        mReviewByUser;
    ::ll::TypedStorage<8, 32, ::RatingData>                      mPrefetchedRatingData;
    ::ll::TypedStorage<4, 4, int>                                mLocalUserRating;
    ::ll::TypedStorage<4, 4, int const>                          mMinimumReviewsToShow;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReviewModel();

    MCNAPI float getAverageRating() const;

    MCNAPI std::string getDisplayRatingCount() const;

    MCNAPI int getTotalRatingsCount() const;

    MCNAPI int getUserRating() const;

    MCNAPI ::ReviewData const* getUserReview() const;

    MCNAPI bool hasReviewSummary() const;

    MCNAPI bool isReviewStatusValid() const;

    MCNAPI void setLocalUserRating(int);

    MCNAPI void setPreFetchedRating(::RatingData const&);

    MCNAPI void setReviewByUser(std::unique_ptr<ReviewData>);

    MCNAPI void setReviewSummary(std::unique_ptr<ReviewSummaryData>);

    MCNAPI ~ReviewModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
