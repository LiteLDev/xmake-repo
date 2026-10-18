#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class ReviewSummaryParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mProductId;
    // NOLINTEND

public:
    // prevent constructor by default
    ReviewSummaryParams& operator=(ReviewSummaryParams const&);
    ReviewSummaryParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ReviewSummaryParams(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
class ReviewSummaryParams {};
#endif // @header-generator platform
