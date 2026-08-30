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

class NetheriteArmorEquippedListener : public ::EventListenerDispatcher<ActorEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetheriteArmorEquippedListener();

    virtual ::EventResult onEvent(::ActorEquippedArmorEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ActorEquippedArmorEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
