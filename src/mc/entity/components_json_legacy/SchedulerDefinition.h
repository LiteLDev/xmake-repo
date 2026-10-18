#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class SchedulerComponent;
#else // @header-generator platform
class ActorDefinitionTrigger;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SchedulerDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>> mTriggerDefs;
    ::ll::TypedStorage<4, 4, uint>                                 mMinDelayTicks;
    ::ll::TypedStorage<4, 4, uint>                                 mMaxDelayTicks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mTriggerDefs;
    ::ll::TypedStorage<4, 4, uint>                                     mMinDelayTicks;
    ::ll::TypedStorage<4, 4, uint>                                     mMaxDelayTicks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SchedulerDefinition();
#else // @header-generator platform
    MCAPI void setMaxDelayTicks(float const& seconds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::SchedulerComponent&) const;

    MCNAPI void setMaxDelayTicks(float const&);

    MCNAPI void setMinDelayTicks(float const&);
#else // @header-generator platform
    MCAPI void setMinDelayTicks(float const& seconds);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, SchedulerDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SchedulerDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
