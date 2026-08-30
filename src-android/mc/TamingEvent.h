#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct TamingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mActor;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mTamingActor;
    // NOLINTEND

public:
    // prevent constructor by default
    TamingEvent& operator=(TamingEvent const&);
    TamingEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TamingEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
