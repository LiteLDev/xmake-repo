#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/EnchantResultType.h"

struct EnchantResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EnchantResultType> result;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>               enchantIdx;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>              enchantIdx;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                 level;
    // NOLINTEND
};
