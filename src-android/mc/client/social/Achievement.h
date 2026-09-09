#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Achievement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mPlatformId;
    // NOLINTEND

public:
    // prevent constructor by default
    Achievement& operator=(Achievement const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Achievement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
