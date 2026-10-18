#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/BlockPos.h"

struct ItemStopUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInstance;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mActor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActor;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>      mBlockPosition;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ItemStopUseOnEvent& operator=(ItemStopUseOnEvent const&);
    ItemStopUseOnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemStopUseOnEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
