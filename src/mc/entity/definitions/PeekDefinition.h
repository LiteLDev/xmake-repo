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
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PeekDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnOpen;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnClose;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnTargetOpen;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 104> mUnk24872a;
    ::ll::UntypedStorage<8, 104> mUnka8083b;
    ::ll::UntypedStorage<8, 104> mUnk60915a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PeekDefinition& operator=(PeekDefinition const&);
    PeekDefinition(PeekDefinition const&);
    PeekDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PeekDefinition>>&);
#else // @header-generator platform
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::PeekDefinition>>& root);
#endif // @header-generator platform
    // NOLINTEND
};
