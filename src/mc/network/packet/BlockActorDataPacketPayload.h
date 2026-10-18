#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/level/BlockPos.h"

struct BlockActorDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>    mPos;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CompoundTag> mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CompoundTag> mData;
#endif // @header-generator platform
    // NOLINTEND
};
