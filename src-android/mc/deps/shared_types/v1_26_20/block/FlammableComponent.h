#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/LavaFlammable.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct FlammableComponent {
public:
    // FlammableComponent inner types declare
    // clang-format off
    struct DetailedFlammable;
    // clang-format on

    // FlammableComponent inner types define
    struct DetailedFlammable {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort>                                 mCatchChanceModifier;
        ::ll::TypedStorage<2, 2, ushort>                                 mDestroyChanceModifier;
        ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::LavaFlammable> mLavaFlammable;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 12, std::variant<bool, SharedTypes::v1_26_20::BlockDefinition::FlammableComponent::DetailedFlammable>> mFlammableValue;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
