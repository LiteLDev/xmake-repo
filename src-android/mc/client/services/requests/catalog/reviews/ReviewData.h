#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ReviewData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTitle;
    ::ll::TypedStorage<8, 24, std::string> mReviewText;
    ::ll::TypedStorage<8, 24, std::string> mItemVersion;
    ::ll::TypedStorage<8, 24, std::string> mReviewId;
    ::ll::TypedStorage<8, 24, std::string> mItemId;
    ::ll::TypedStorage<8, 24, std::string> mGamerTag;
    ::ll::TypedStorage<8, 24, std::string> mLocale;
    ::ll::TypedStorage<8, 24, std::string> mSubmitted;
    ::ll::TypedStorage<8, 8, ulong>        mXuid;
    ::ll::TypedStorage<4, 4, int>          mRating;
    ::ll::TypedStorage<4, 4, int>          mHelpfulnessVotes;
    ::ll::TypedStorage<4, 4, int>          mHelpfulPositive;
    ::ll::TypedStorage<4, 4, int>          mHelpfulNegative;
    ::ll::TypedStorage<1, 1, bool>         mIsInstalled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReviewData();

    MCNAPI explicit ReviewData(::Json::Value const&);

    MCNAPI ~ReviewData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
