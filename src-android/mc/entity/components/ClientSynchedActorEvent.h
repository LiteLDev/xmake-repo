#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ActorEventPacketPayload.h"

struct ClientSynchedActorEvent : public ::ActorEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTickDelay;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientSynchedActorEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientSynchedActorEvent(::ActorEventPacketPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorEventPacketPayload const&);
    // NOLINTEND
};
