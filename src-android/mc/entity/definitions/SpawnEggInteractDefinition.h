#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct SpawnEggInteractDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnSpawn;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, SpawnEggInteractDefinition>>&);
    // NOLINTEND
};
