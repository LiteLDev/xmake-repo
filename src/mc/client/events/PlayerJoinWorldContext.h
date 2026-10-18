#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/network/connection/ReconnectionType.h"

struct PlayerJoinWorldContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 partyId;
    ::ll::TypedStorage<1, 1, bool>                           isPartyLeader;
    ::ll::TypedStorage<1, 1, bool>                           isPartyDestination;
    ::ll::TypedStorage<1, 1, bool>                           isServerTransfer;
    ::ll::TypedStorage<1, 1, ::Connection::ReconnectionType> reconnectionType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerJoinWorldContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PlayerJoinWorldContext {};
#endif // @header-generator platform
#endif // @header-generator platform
