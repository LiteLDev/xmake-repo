#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ActorEventCoordinator;
struct ActorNotificationEvent;
// clang-format on

class CombatRegenerationListener : public ::ActorEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorEventCoordinator&> mActorEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>          mTargetActorId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>          mMobId;
    ::ll::TypedStorage<1, 1, bool>                     mTargetKilledByMob;
    // NOLINTEND

public:
    // prevent constructor by default
    CombatRegenerationListener& operator=(CombatRegenerationListener const&);
    CombatRegenerationListener(CombatRegenerationListener const&);
    CombatRegenerationListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CombatRegenerationListener();

    virtual ::EventResult onEvent(::ActorNotificationEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ActorNotificationEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
