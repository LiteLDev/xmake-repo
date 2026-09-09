#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/player/PlayerPartyInfo.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PartyChangedPacket;
// clang-format on

struct PartyChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::optional<PlayerPartyInfo>> mPartyInfo;
    ::ll::UntypedStorage<1, 24>                               mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChangedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PartyChangedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
