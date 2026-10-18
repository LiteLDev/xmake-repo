#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#else // @header-generator platform
#endif // @header-generator platform

struct LevelEventGenericPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mEventId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CompoundTag> mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CompoundTag> mData;
#endif // @header-generator platform
    // NOLINTEND
};
