#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/v1_26_20/block/TintMethod.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct MapColorComponent {
public:
    // MapColorComponent inner types declare
    // clang-format off
    struct DetailedMapColor;
    // clang-format on

    // MapColorComponent inner types define
    struct DetailedMapColor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB>         mMapColor;
        ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::TintMethod> mTintMethod;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 24, std::variant<SharedTypes::Color255RGB, SharedTypes::v1_26_20::BlockDefinition::MapColorComponent::DetailedMapColor>> mMapColor;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
