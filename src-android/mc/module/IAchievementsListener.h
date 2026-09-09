#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/ItemEventListener.h"
#include "mc/world/events/PlayerEventListener.h"

class IAchievementsListener : public ::EventListenerDispatcher<BlockEventListener>,
                              public ::EventListenerDispatcher<ItemEventListener>,
                              public ::EventListenerDispatcher<PlayerEventListener>,
                              public ::EventListenerDispatcher<ActorEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAchievementsListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
