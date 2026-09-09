#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CreateReviewParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mProductId;
    ::ll::TypedStorage<8, 24, std::string> mTitle;
    ::ll::TypedStorage<8, 24, std::string> mReviewText;
    ::ll::TypedStorage<4, 4, int>          mRating;
    ::ll::TypedStorage<1, 1, bool>         mIsInstalled;
    ::ll::TypedStorage<8, 24, std::string> mItemVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateReviewParams& operator=(CreateReviewParams const&);
    CreateReviewParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CreateReviewParams(std::string const&);

    MCNAPI void setReviewRating(int);

    MCNAPI ~CreateReviewParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
