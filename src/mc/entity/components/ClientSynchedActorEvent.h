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
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
