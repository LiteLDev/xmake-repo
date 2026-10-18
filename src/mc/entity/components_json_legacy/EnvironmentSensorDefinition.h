#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace JsonUtil { class EmptyClass; }
#else // @header-generator platform
class ActorDefinitionTrigger;
#endif // @header-generator platform
// clang-format on

class EnvironmentSensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>> mTriggers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mTriggers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addEnvironmentTrigger(::ActorDefinitionTrigger const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EnvironmentSensorDefinition>>&);
#else // @header-generator platform
    MCAPI void addEnvironmentTrigger(::ActorDefinitionTrigger const& trigger);
#endif // @header-generator platform
    // NOLINTEND
};
