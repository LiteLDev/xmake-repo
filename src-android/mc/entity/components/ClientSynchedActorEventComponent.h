#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ClientSynchedActorEvent.h"

struct ClientSynchedActorEventComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ClientSynchedActorEvent>> mSynchedEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientSynchedActorEventComponent& operator=(ClientSynchedActorEventComponent const&);
};
