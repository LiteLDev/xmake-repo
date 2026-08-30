#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerFogPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFogStack;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerFogPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
