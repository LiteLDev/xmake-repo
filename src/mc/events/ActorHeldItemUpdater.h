#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ActorCarriedItemChangedEvent;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ActorHeldItemUpdater : public ::EventListenerDispatcher<ActorEventListener> {
#else // @header-generator platform
class ActorHeldItemUpdater : public ::EventListenerDispatcher<::ActorEventListener> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorHeldItemUpdater();

    virtual ::EventResult onEvent(::ActorCarriedItemChangedEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorCarriedItemChangedEvent const& actorCarriedItemChangedEvent) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorCarriedItemChangedEvent const&);
#else // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorCarriedItemChangedEvent const& actorCarriedItemChangedEvent);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
