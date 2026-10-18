#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct StackableItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStack const&> itemStack;
    ::ll::TypedStorage<8, 24, std::vector<int>>  orderedSlots;
    // NOLINTEND

public:
    // prevent constructor by default
    StackableItem& operator=(StackableItem const&);
    StackableItem();
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
