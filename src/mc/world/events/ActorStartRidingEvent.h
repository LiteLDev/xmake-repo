#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct ActorStartRidingEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPassenger;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mVehicle;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorStartRidingEvent& operator=(ActorStartRidingEvent const&);
    ActorStartRidingEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorStartRidingEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPassenger;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mVehicle;
#endif // @header-generator platform
    // NOLINTEND
};
