#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/FloatRange.h"
#include "mc/util/WeightedChoices.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                      mLooping;
    ::ll::TypedStorage<1, 1, bool>                      mRandomInterval;
    ::ll::TypedStorage<4, 8, ::FloatRange>              mTime;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnTimeDown;
    ::ll::UntypedStorage<8, 24>                         mTimeChoices;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>   mUnk6fb0ff;
    ::ll::UntypedStorage<1, 1>   mUnk1be68c;
    ::ll::UntypedStorage<4, 8>   mUnk219ada;
    ::ll::UntypedStorage<8, 104> mUnk941273;
    ::ll::UntypedStorage<8, 24>  mUnkb2a6e5;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TimerDefinition& operator=(TimerDefinition const&);
    TimerDefinition(TimerDefinition const&);
    TimerDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TimerDefinition();
#else // @header-generator platform
    MCAPI void addWeightedChoiceEntry(::WeightChoiceEntry const& entry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addWeightedChoiceEntry(::WeightChoiceEntry const&);

    MCNAPI void initialize(::EntityContext&, ::TimerComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::TimerComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, TimerDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TimerDefinition>>& root);
#endif // @header-generator platform
    // NOLINTEND
};
