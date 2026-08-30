#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/IPlayerDeathManagerProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ServerLevel;
struct ActorUniqueID;
// clang-format on

class PlayerDeathManagerProxy : public ::IPlayerDeathManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mServerLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDeathManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerDeathManagerProxy();

    virtual ::Actor* fetchActor(::ActorUniqueID) const;

    virtual bool shouldShowDeathMessages() const;

    virtual void onWorldOwnerHasDied();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerDeathManagerProxy(::ServerLevel&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerLevel&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Actor* $fetchActor(::ActorUniqueID) const;

    MCNAPI bool $shouldShowDeathMessages() const;

    MCNAPI void $onWorldOwnerHasDied();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
