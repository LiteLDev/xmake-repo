#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerStartItemCooldownPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mItemCategory;
    ::ll::TypedStorage<4, 4, int>          mDurationTicks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mItemCategory;
    ::ll::TypedStorage<4, 4, int>            mDurationTicks;
#endif // @header-generator platform
    // NOLINTEND
};
