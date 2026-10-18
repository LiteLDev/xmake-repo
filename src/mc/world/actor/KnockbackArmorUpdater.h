#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ActorEquippedArmorEvent;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class KnockbackArmorUpdater : public ::EventListenerDispatcher<ActorEventListener> {
#else // @header-generator platform
class KnockbackArmorUpdater : public ::EventListenerDispatcher<::ActorEventListener> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~KnockbackArmorUpdater();

    virtual ::EventResult onEvent(::ActorEquippedArmorEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorEquippedArmorEvent const& actorEquippedArmorEvent) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorEquippedArmorEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorEquippedArmorEvent const& actorEquippedArmorEvent);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
