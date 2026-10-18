#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemStack;
// clang-format on

class InventoryTransactionItemGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                          mItemId;
    ::ll::TypedStorage<4, 4, int>                          mItemAux;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mTag;
    ::ll::TypedStorage<4, 4, int>                          mCount;
    ::ll::TypedStorage<1, 1, bool>                         mOverflow;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                              mItemId;
    ::ll::TypedStorage<4, 4, int>                              mItemAux;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mTag;
    ::ll::TypedStorage<4, 4, int>                              mCount;
    ::ll::TypedStorage<1, 1, bool>                             mOverflow;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    InventoryTransactionItemGroup();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack getItemInstance() const;
#else // @header-generator platform
    MCAPI ::ItemStack getItemInstance() const;
#endif // @header-generator platform
    // NOLINTEND
};
