#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class SchedulerComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SchedulerDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>> mTriggerDefs;
    ::ll::TypedStorage<4, 4, uint>                                 mMinDelayTicks;
    ::ll::TypedStorage<4, 4, uint>                                 mMaxDelayTicks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SchedulerDefinition();

    MCNAPI void initialize(::EntityContext&, ::SchedulerComponent&) const;

    MCNAPI void setMaxDelayTicks(float const&);

    MCNAPI void setMinDelayTicks(float const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, SchedulerDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
