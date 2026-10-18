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
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TargetNearbyDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                     mInsideRange;
    ::ll::TypedStorage<4, 4, float>                     mOutsideRange;
    ::ll::TypedStorage<1, 1, bool>                      mMustSee;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mInsideRangeTrigger;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOutsideRangeTrigger;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mLostVisionTrigger;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>   mUnkc50ab8;
    ::ll::UntypedStorage<4, 4>   mUnkf55c7e;
    ::ll::UntypedStorage<1, 1>   mUnk1f1461;
    ::ll::UntypedStorage<8, 104> mUnk809433;
    ::ll::UntypedStorage<8, 104> mUnk59ffaa;
    ::ll::UntypedStorage<8, 104> mUnk56719e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TargetNearbyDefinition& operator=(TargetNearbyDefinition const&);
    TargetNearbyDefinition(TargetNearbyDefinition const&);
    TargetNearbyDefinition();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, TargetNearbyDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TargetNearbyDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
