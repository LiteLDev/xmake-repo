#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PFEntityKey.h"

struct PFLobbyMemberUpdateSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::PFEntityKey>     member;
    ::ll::TypedStorage<1, 1, bool>               connectionStatusUpdated;
    ::ll::TypedStorage<4, 4, uint>               updatedMemberPropertyCount;
    ::ll::TypedStorage<8, 8, char const* const*> updatedMemberPropertyKeys;
    // NOLINTEND
};
