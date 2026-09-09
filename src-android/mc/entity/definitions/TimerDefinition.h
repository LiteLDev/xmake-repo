#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/util/WeightedChoices.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct TimerComponent;
struct WeightChoiceEntry;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TimerDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mLooping;
    ::ll::TypedStorage<1, 1, bool>                      mRandomInterval;
    ::ll::TypedStorage<4, 8, ::FloatRange>              mTime;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnTimeDown;
    ::ll::UntypedStorage<8, 24>                         mTimeChoices;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TimerDefinition();

    MCNAPI void addWeightedChoiceEntry(::WeightChoiceEntry const&);

    MCNAPI void initialize(::EntityContext&, ::TimerComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, TimerDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
