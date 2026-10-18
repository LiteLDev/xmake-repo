#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"
#else // @header-generator platform
#endif // @header-generator platform

struct TemporaryItemCounter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInst;
    ::ll::TypedStorage<4, 4, int>              mTotalCount;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 128> mUnk88eb70;
    ::ll::UntypedStorage<4, 4>   mUnk6469d7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TemporaryItemCounter& operator=(TemporaryItemCounter const&);
    TemporaryItemCounter(TemporaryItemCounter const&);
    TemporaryItemCounter();
#endif // @header-generator platform
};
