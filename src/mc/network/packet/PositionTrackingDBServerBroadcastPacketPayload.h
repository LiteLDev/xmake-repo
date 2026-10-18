#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/level/PositionTrackingId.h"

struct PositionTrackingDBServerBroadcastPacketPayload {
public:
    // PositionTrackingDBServerBroadcastPacketPayload inner types define
    enum class Action : uchar {
        Update   = 0,
        Destroy  = 1,
        NotFound = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PositionTrackingDBServerBroadcastPacketPayload::Action> mAction;
    ::ll::TypedStorage<4, 4, ::PositionTrackingId>                                     mId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CompoundTag>                                           mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CompoundTag>                                           mData;
#endif // @header-generator platform
    // NOLINTEND
};
