#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RailActivatorDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnActivate;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnDeactivate;
    ::ll::TypedStorage<1, 1, bool>                      mCheckBlockTypes;
    ::ll::TypedStorage<1, 1, bool>                      mTickCommandBlockOnActivate;
    ::ll::TypedStorage<1, 1, bool>                      mTickCommandBlockOnDeactivate;
    ::ll::TypedStorage<1, 1, bool>                      mEjectOnActivate;
    ::ll::TypedStorage<1, 1, bool>                      mEjectOnDeactivate;
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnActivate;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnDeactivate;
    ::ll::TypedStorage<1, 1, bool>                       mCheckBlockTypes;
    ::ll::TypedStorage<1, 1, bool>                       mTickCommandBlockOnActivate;
    ::ll::TypedStorage<1, 1, bool>                       mTickCommandBlockOnDeactivate;
    ::ll::TypedStorage<1, 1, bool>                       mEjectOnActivate;
    ::ll::TypedStorage<1, 1, bool>                       mEjectOnDeactivate;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, RailActivatorDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RailActivatorDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
