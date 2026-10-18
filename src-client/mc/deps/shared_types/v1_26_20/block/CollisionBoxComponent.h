#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/BoundingBoxData.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct CollisionBoxComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 32, std::variant<bool, SharedTypes::v1_26_20::BlockDefinition::BoundingBoxData, std::vector<SharedTypes::v1_26_20::BlockDefinition::BoundingBoxData>>> mCollisionBoxData;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
