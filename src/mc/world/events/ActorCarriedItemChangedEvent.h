#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemInstance.h"

struct ActorCarriedItemChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>       mEntity;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>       mEntity;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mPreviouslyCarriedItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mCarriedItem;
    ::ll::TypedStorage<4, 4, ::HandSlot>             mHandSlot;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ActorCarriedItemChangedEvent& operator=(ActorCarriedItemChangedEvent const&);
    ActorCarriedItemChangedEvent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorCarriedItemChangedEvent();
#else // @header-generator platform
    MCAPI ~ActorCarriedItemChangedEvent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
