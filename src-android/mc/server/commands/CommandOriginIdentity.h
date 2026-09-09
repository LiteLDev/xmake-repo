#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandOriginIdentity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    ::ll::TypedStorage<8, 24, std::string> mPlatformOnlineId;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOriginIdentity& operator=(CommandOriginIdentity const&);
    CommandOriginIdentity();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CommandOriginIdentity();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
