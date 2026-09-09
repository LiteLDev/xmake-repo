#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/item/ItemDescriptor.h"

struct RepairItemEntry {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
