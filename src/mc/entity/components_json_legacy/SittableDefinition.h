#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class SitComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SittableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnSit;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnStand;
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnSit;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnStand;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void uninitialize(::EntityContext&, ::SitComponent&) const;
#else // @header-generator platform
    MCAPI void uninitialize(::EntityContext& entity, ::SitComponent&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, SittableDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SittableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
