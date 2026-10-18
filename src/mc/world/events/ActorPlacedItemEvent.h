#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemInstance.h"

struct ActorPlacedItemEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>       mEntity;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>       mEntity;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mItem;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorPlacedItemEvent& operator=(ActorPlacedItemEvent const&);
    ActorPlacedItemEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
