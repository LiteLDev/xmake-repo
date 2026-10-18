#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/ItemEnchantOption.h"

struct PlayerEnchantOptionsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemEnchantOption>> mOptions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemEnchantOption>> mOptions;
#endif // @header-generator platform
    // NOLINTEND
};
