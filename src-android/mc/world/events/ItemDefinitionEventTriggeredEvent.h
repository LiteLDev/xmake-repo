#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemInstance.h"

struct ItemDefinitionEventTriggeredEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInstance;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mActor;
    ::ll::TypedStorage<8, 24, std::string>     mEventName;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDefinitionEventTriggeredEvent& operator=(ItemDefinitionEventTriggeredEvent const&);
    ItemDefinitionEventTriggeredEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemDefinitionEventTriggeredEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
