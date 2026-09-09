#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/BrainDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/ActorDefinitions.h"

namespace SharedTypes::v1_26_10 {

struct ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mDescription;
    ::ll::TypedStorage<8, 104, std::optional<SharedTypes::v1_21_130::Brain::BrainDefinition>> mBrainDefinition;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_10::ActorDefinitions> mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::v1_26_10::ActorDefinitions>> mDefinitionGroups;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mEvents;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
