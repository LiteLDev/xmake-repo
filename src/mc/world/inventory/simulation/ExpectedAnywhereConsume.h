#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ExpectedAnywhereConsume {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    ::ll::TypedStorage<4, 4, uint>          mQuantity;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 152> mUnkefab32;
    ::ll::UntypedStorage<4, 4>   mUnkb207bd;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ExpectedAnywhereConsume& operator=(ExpectedAnywhereConsume const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ExpectedAnywhereConsume(ExpectedAnywhereConsume const&);
#endif // @header-generator platform
    ExpectedAnywhereConsume();
};
