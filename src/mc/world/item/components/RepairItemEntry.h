#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/item/ItemDescriptor.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemDescriptor;
// clang-format on

#endif // @header-generator platform
struct RepairItemEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mItems;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>            mRepairAmount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RepairItemEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mItems;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                mRepairAmount;
#endif // @header-generator platform
    // NOLINTEND
};
