#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace MovementDataExtractionUtility { struct MovementSnapshotComponent; }
// clang-format on

namespace MovementDataExtractionUtility {

class SnapshotAccessor {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::variant<const EntityContext*, const MovementDataExtractionUtility::MovementSnapshotComponent*>> mSnapshot;
    // clang-format on
    // NOLINTEND
};

} // namespace MovementDataExtractionUtility
