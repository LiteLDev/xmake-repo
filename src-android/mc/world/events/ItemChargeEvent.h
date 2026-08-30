#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemInstance.h"

struct ItemChargeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInstance;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mActor;
    ::ll::TypedStorage<4, 4, int>              mUseDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemChargeEvent& operator=(ItemChargeEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemChargeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
