#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/v1_26_0/block/BlockedDirections.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct PlacementFilterComponent {
public:
    // PlacementFilterComponent inner types declare
    // clang-format off
    struct PlacementCondition;
    // clang-format on

    // PlacementFilterComponent inner types define
    struct PlacementCondition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_0::BlockedDirections>          mDirectionalFilter;
        ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::BlockDescriptor>> mBlockFilter;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_20::BlockDefinition::PlacementFilterComponent::PlacementCondition>> mConditions;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
