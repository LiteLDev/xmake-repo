#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"

namespace SharedTypes::v1_20_50 {

struct RepairableItemComponent {
public:
    // RepairableItemComponent inner types declare
    // clang-format off
    struct RepairItemEntry;
    // clang-format on

    // RepairableItemComponent inner types define
    struct RepairItemEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>> mItems;
        ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>            mRepairAmount;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_50::RepairableItemComponent::RepairItemEntry>> mRepairItems;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
