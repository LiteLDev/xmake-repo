#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/BlockMenuCategory.h"
#include "mc/deps/shared_types/v1_26_20/block/States.h"
#include "mc/deps/shared_types/v1_26_20/block/Traits.h"
#include "mc/deps/shared_types/v1_26_20/block/VanillaBlockData.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mIdentifier;
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_26_20::BlockDefinition::BlockMenuCategory> mMenuCategory;
    ::ll::TypedStorage<8, 160, ::SharedTypes::v1_26_20::BlockDefinition::States> mStates;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_20::BlockDefinition::Traits> mTraits;
    ::ll::TypedStorage<8, 80, std::optional<SharedTypes::v1_26_20::BlockDefinition::VanillaBlockData>> mVanillaBlockData;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
