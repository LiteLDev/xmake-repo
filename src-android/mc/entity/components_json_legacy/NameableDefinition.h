#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/NameAction.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class NameableComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<NameAction>>  mNameActions;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mDefaultActionTrigger;
    ::ll::TypedStorage<1, 1, bool>                      mAlwaysShow;
    ::ll::TypedStorage<1, 1, bool>                      mAllowNameTagRenaming;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NameableDefinition();

    MCNAPI void addNameAction(::NameAction const&);

    MCNAPI void initialize(::EntityContext&, ::NameableComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, NameableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
