#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DestructibleByExplosionComponent {
public:
    // DestructibleByExplosionComponent inner types declare
    // clang-format off
    struct DetailedResistance;
    // clang-format on

    // DestructibleByExplosionComponent inner types define
    struct DetailedResistance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mResistance;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 8, std::variant<bool, SharedTypes::v1_26_20::BlockDefinition::DestructibleByExplosionComponent::DetailedResistance>> mResistanceValue;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
