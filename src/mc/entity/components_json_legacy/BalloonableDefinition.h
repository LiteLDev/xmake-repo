#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BalloonableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                     mSoftDistance;
    ::ll::TypedStorage<4, 4, float>                     mMaxDistance;
    ::ll::TypedStorage<4, 4, float>                     mInvMass;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnBalloon;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnUnballoon;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                      mSoftDistance;
    ::ll::TypedStorage<4, 4, float>                      mMaxDistance;
    ::ll::TypedStorage<4, 4, float>                      mInvMass;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnBalloon;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnUnballoon;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BalloonableDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BalloonableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
