#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/LeashablePreset.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class LeashableComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct LeashablePreset;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LeashableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<LeashablePreset>> mPresets;
    ::ll::TypedStorage<1, 1, bool>                          mCanBeCut;
    ::ll::TypedStorage<1, 1, bool>                          mCanBeStolen;
    ::ll::TypedStorage<1, 1, bool>                          mUnleashOnRemoval;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>     mOnLeash;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>     mOnUnleash;
    ::ll::TypedStorage<1, 1, bool>                          mOnUnleashInteractOnly;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::LeashablePreset>> mPresets;
    ::ll::TypedStorage<1, 1, bool>                              mCanBeCut;
    ::ll::TypedStorage<1, 1, bool>                              mCanBeStolen;
    ::ll::TypedStorage<1, 1, bool>                              mUnleashOnRemoval;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnLeash;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnUnleash;
    ::ll::TypedStorage<1, 1, bool>                              mOnUnleashInteractOnly;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::LeashableComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::LeashableComponent& component) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void uninitialize(::EntityContext&, ::LeashableComponent&) const;

    MCNAPI ~LeashableDefinition();
#else // @header-generator platform
    MCAPI void uninitialize(::EntityContext& entity, ::LeashableComponent&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LeashableDefinition>>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::LeashableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
