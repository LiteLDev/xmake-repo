#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace MovementDataExtractionUtility { struct MovementSnapshotComponent; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace MovementDataExtractionUtility {

class SnapshotAccessor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, std::variant<const EntityContext*, const MovementDataExtractionUtility::MovementSnapshotComponent*>> mSnapshot;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk6087d4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SnapshotAccessor& operator=(SnapshotAccessor const&);
    SnapshotAccessor(SnapshotAccessor const&);
    SnapshotAccessor();
#endif // @header-generator platform
};

} // namespace MovementDataExtractionUtility
