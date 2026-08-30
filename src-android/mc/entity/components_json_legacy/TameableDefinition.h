#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTameItem.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class TameableComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                 mTameChance;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTameItem>> mTameItems;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>             mOnTame;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TameableDefinition();

    MCNAPI void addTamingItem(::ActorDefinitionTameItem const&);

    MCNAPI void addTamingItemByName(std::string const&);

    MCNAPI void initialize(::EntityContext&, ::TameableComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, TameableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
