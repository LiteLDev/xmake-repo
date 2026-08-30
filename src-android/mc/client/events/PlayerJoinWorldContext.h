#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Connection__ReconnectionType.h"

struct PlayerJoinWorldContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   partyId;
    ::ll::TypedStorage<1, 1, bool>                           isPartyLeader;
    ::ll::TypedStorage<1, 1, bool>                           isPartyDestination;
    ::ll::TypedStorage<1, 1, bool>                           isServerTransfer;
    ::ll::TypedStorage<1, 1, ::Connection::ReconnectionType> reconnectionType;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerJoinWorldContext();
};
