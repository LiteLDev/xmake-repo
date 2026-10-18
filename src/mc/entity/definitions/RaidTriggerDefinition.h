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
class SemVersionConstant;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RaidTriggerDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnTriggered;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 104> mUnkfea261;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RaidTriggerDefinition& operator=(RaidTriggerDefinition const&);
    RaidTriggerDefinition(RaidTriggerDefinition const&);
    RaidTriggerDefinition();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, RaidTriggerDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RaidTriggerDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& JSONUTIL_DROP_UNRECOGNIZED_FIELDS_VERSION();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& JSONUTIL_DROP_UNRECOGNIZED_FIELDS_VERSION();
#endif // @header-generator platform
    // NOLINTEND
};
