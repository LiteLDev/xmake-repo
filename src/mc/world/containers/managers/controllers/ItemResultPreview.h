#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ItemResultPreview {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItem;
    ::ll::UntypedStorage<4, 8>                 mRecipeNetId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 128> mUnk301aba;
    ::ll::UntypedStorage<4, 4>   mUnk78cbb5;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemResultPreview& operator=(ItemResultPreview const&);
    ItemResultPreview(ItemResultPreview const&);
    ItemResultPreview();
#endif // @header-generator platform
};
