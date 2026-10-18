#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemStack.h"

struct PlayerHotbarSelectedSlotChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>              mPreviousSlotSelected;
    ::ll::TypedStorage<4, 4, int>              mNewSlotSelected;
    ::ll::TypedStorage<8, 152, ::ItemStack>    mItem;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerHotbarSelectedSlotChangeEvent& operator=(PlayerHotbarSelectedSlotChangeEvent const&);
    PlayerHotbarSelectedSlotChangeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerHotbarSelectedSlotChangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
