#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TargetNearbyDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mInsideRange;
    ::ll::TypedStorage<4, 4, float>                     mOutsideRange;
    ::ll::TypedStorage<1, 1, bool>                      mMustSee;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mInsideRangeTrigger;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOutsideRangeTrigger;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mLostVisionTrigger;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, TargetNearbyDefinition>>&);
    // NOLINTEND
};
