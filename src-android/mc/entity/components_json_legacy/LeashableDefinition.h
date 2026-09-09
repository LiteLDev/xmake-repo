#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/LeashablePreset.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class LeashableComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LeashableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<LeashablePreset>> mPresets;
    ::ll::TypedStorage<1, 1, bool>                          mCanBeCut;
    ::ll::TypedStorage<1, 1, bool>                          mCanBeStolen;
    ::ll::TypedStorage<1, 1, bool>                          mUnleashOnRemoval;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>     mOnLeash;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>     mOnUnleash;
    ::ll::TypedStorage<1, 1, bool>                          mOnUnleashInteractOnly;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::LeashableComponent&) const;

    MCNAPI void uninitialize(::EntityContext&, ::LeashableComponent&) const;

    MCNAPI ~LeashableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LeashableDefinition>>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
