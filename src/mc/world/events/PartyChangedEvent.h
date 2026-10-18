#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/player/PlayerPartyInfo.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class PartyChangedPacket;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct PartyChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::std::optional<::PlayerPartyInfo>> mPartyInfo;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>         mPlayer;
#endif // @header-generator platform
    // NOLINTEND
};
