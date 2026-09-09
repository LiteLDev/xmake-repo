#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/Connection.h"
#include "mc/deps/shared_types/v1_26_20/block/MultiBlock.h"
#include "mc/deps/shared_types/v1_26_20/block/PlacementDirection.h"
#include "mc/deps/shared_types/v1_26_20/block/PlacementPosition.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct Traits {
public:
    // Traits inner types define
    using TraitVariant = std::variant<
        SharedTypes::v1_26_20::BlockDefinition::Connection,
        SharedTypes::v1_26_20::BlockDefinition::MultiBlock,
        SharedTypes::v1_26_20::BlockDefinition::PlacementDirection,
        SharedTypes::v1_26_20::BlockDefinition::PlacementPosition>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::BlockDefinition::Connection>          mConnection;
    ::ll::TypedStorage<2, 6, ::SharedTypes::v1_26_20::BlockDefinition::MultiBlock>          mMultiBlock;
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_26_20::BlockDefinition::PlacementDirection> mPlacementDirection;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::BlockDefinition::PlacementPosition>   mPlacementPosition;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
