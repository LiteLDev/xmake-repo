#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerPartyInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> partyId;
    ::ll::TypedStorage<1, 1, bool>         isLeader;
    // NOLINTEND
};
