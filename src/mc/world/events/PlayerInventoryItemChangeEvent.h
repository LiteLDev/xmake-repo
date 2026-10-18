#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemStack.h"

struct PlayerInventoryItemChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 152, ::ItemStack>    mPreviousItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>    mNewItem;
    ::ll::TypedStorage<4, 4, int>              mSlotNumber;
    ::ll::TypedStorage<1, 1, bool>             mIsQuantityChangedOnly;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    PlayerInventoryItemChangeEvent& operator=(PlayerInventoryItemChangeEvent const&);
    PlayerInventoryItemChangeEvent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PlayerInventoryItemChangeEvent();
#else // @header-generator platform
    MCAPI ~PlayerInventoryItemChangeEvent();
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
