#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ReviewData;
namespace Json { class Value; }
// clang-format on

class ReviewByUserResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ReviewData>> mReviewData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<ReviewData> takeReviewData();

    MCNAPI ~ReviewByUserResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
