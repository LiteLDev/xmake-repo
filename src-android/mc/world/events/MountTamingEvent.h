#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct MountTamingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPassenger;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mMount;
    // NOLINTEND

public:
    // prevent constructor by default
    MountTamingEvent& operator=(MountTamingEvent const&);
    MountTamingEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MountTamingEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
