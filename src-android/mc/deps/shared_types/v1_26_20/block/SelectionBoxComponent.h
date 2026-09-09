#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/BoundingBoxData.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct SelectionBoxComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 28, std::variant<bool, SharedTypes::v1_26_20::BlockDefinition::BoundingBoxData>> mSelectionBox;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
