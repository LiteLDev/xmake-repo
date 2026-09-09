#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestResultsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTestName;
    ::ll::TypedStorage<8, 24, std::string> mError;
    ::ll::TypedStorage<1, 1, bool>         mSucceeded;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GameTestResultsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
