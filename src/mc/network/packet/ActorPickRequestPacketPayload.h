#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorPickRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long>  mID;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64> mID;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>  mWithData;
    ::ll::TypedStorage<1, 1, uchar> mMaxSlots;
    // NOLINTEND
};
