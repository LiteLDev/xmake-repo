#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DateRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mStartDate;
    ::ll::TypedStorage<8, 24, std::string> mEndDate;
    // NOLINTEND

public:
    // prevent constructor by default
    DateRange();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DateRange();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
