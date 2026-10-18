#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct AttackCooldownComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AttackCooldownDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnAttackCooldownComplete;
    ::ll::TypedStorage<4, 8, ::FloatRange>              mCooldownTime;
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnAttackCooldownComplete;
    ::ll::TypedStorage<4, 8, ::FloatRange>               mCooldownTime;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::AttackCooldownComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::AttackCooldownComponent& cooldownComponent) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AttackCooldownDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AttackCooldownDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
