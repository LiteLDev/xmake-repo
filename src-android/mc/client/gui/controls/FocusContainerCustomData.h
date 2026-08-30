#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FocusContainerCustomData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> otherFocusContainerName;
    ::ll::TypedStorage<8, 24, std::string> focusIdInside;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusContainerCustomData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FocusContainerCustomData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
