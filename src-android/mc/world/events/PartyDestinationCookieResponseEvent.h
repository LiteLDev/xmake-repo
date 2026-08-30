#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PartyDestinationCookieResponsePacket;
// clang-format on

struct PartyDestinationCookieResponseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mCookie;
    ::ll::UntypedStorage<1, 8>             mAccepted;
    ::ll::UntypedStorage<1, 24>            mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyDestinationCookieResponseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PartyDestinationCookieResponseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
