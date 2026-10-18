#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct ActorStopRidingEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPassenger;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mVehicle;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPassenger;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mVehicle;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>             exitFromPassenger;
    ::ll::TypedStorage<1, 1, bool>             actorIsBeingDestroyed;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 6>                 switchingVehicles;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorStopRidingEvent& operator=(ActorStopRidingEvent const&);
    ActorStopRidingEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorStopRidingEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>             switchingVehicles;
#endif // @header-generator platform
    // NOLINTEND
};
