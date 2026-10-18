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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CombatRegenerationListener();
#else // @header-generator platform
    virtual ~CombatRegenerationListener() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorNotificationEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorNotificationEvent const& event) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI explicit CombatRegenerationListener(::ActorEventCoordinator& coordinator);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorEventCoordinator& coordinator);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorNotificationEvent const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorNotificationEvent const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
