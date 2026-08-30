#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/actor/brain/InternalAccessMapDefinition.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryDefinition.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryDefinitionEquality.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryDefinitionHash.h"

namespace SharedTypes::v1_21_130::Brain {

struct BrainDefinition {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_set<SharedTypes::v1_21_130::Brain::MemoryDefinition, SharedTypes::v1_21_130::Brain::MemoryDefinitionHash, SharedTypes::v1_21_130::Brain::MemoryDefinitionEquality, std::allocator<SharedTypes::v1_21_130::Brain::MemoryDefinition>>> mMemories;
    ::ll::TypedStorage<8, 56, std::optional<SharedTypes::v1_21_130::Brain::InternalAccessMapDefinition>> mInternalAccessMap;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Brain
