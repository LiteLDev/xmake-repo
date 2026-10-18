#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionTameItem.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class TameableComponent;
#else // @header-generator platform
struct ActorDefinitionTameItem;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                 mTameChance;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTameItem>> mTameItems;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>             mOnTame;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                     mTameChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTameItem>> mTameItems;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>                mOnTame;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TameableDefinition();
#else // @header-generator platform
    MCAPI void addTamingItem(::ActorDefinitionTameItem const& tameItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addTamingItem(::ActorDefinitionTameItem const&);

    MCNAPI void addTamingItemByName(std::string const&);

    MCNAPI void initialize(::EntityContext&, ::TameableComponent&) const;
#else // @header-generator platform
    MCAPI void addTamingItemByName(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, TameableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TameableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
