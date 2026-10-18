#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

struct PlayerHotbarPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>          mSelectedSlot;
    ::ll::TypedStorage<1, 1, bool>          mShouldSelectSlot;
    ::ll::TypedStorage<1, 1, ::ContainerID> mContainerId;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerHotbarPacketPayload(uint, ::ContainerID, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, ::ContainerID, bool);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
