#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

struct PlayerInventorySlotData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID> mContainerId;
    ::ll::TypedStorage<4, 4, int>           mSlot;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerInventorySlotData();
#else // @header-generator platform
#endif // @header-generator platform
};
