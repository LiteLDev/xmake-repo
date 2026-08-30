#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/BlockComponents.h"
#include "mc/deps/shared_types/v1_26_20/block/BlockPermutation.h"
#include "mc/deps/shared_types/v1_26_20/block/DeprecatedDefinitionEvent.h"
#include "mc/deps/shared_types/v1_26_20/block/Description.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct BlockDefinitionDocument {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 360, ::SharedTypes::v1_26_20::BlockDefinition::Description> mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_20::BlockDefinition::BlockComponents> mComponents;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_20::BlockDefinition::BlockPermutation>> mPermutations;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent>> mDeprecatedEventHandlers;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mOrderedV1CustomComponents;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
