#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/NameAction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class NameableComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct NameAction;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<NameAction>>  mNameActions;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mDefaultActionTrigger;
    ::ll::TypedStorage<1, 1, bool>                      mAlwaysShow;
    ::ll::TypedStorage<1, 1, bool>                      mAllowNameTagRenaming;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::NameAction>> mNameActions;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>   mDefaultActionTrigger;
    ::ll::TypedStorage<1, 1, bool>                         mAlwaysShow;
    ::ll::TypedStorage<1, 1, bool>                         mAllowNameTagRenaming;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NameableDefinition();
#else // @header-generator platform
    MCAPI void addNameAction(::NameAction const& nameAction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addNameAction(::NameAction const&);

    MCNAPI void initialize(::EntityContext&, ::NameableComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::NameableComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, NameableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::NameableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
