#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class IAchievementsListener {};
#endif // @header-generator platform
