#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/EntitySubsensorDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntitySensorComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct EntitySubsensorDescriptor;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EntitySensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                    mRelativeRange;
    ::ll::TypedStorage<1, 1, bool>                                    mFindPlayersOnly;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                     mEventCondition;
    ::ll::TypedStorage<8, 24, std::vector<EntitySubsensorDescriptor>> mSubsensorDescriptors;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                        mRelativeRange;
    ::ll::TypedStorage<1, 1, bool>                                        mFindPlayersOnly;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                         mEventCondition;
    ::ll::TypedStorage<8, 24, ::std::vector<::EntitySubsensorDescriptor>> mSubsensorDescriptors;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EntitySensorDefinition();

    MCNAPI void initialize(::EntityContext&, ::EntitySensorComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::EntitySensorComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EntitySensorDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EntitySensorDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
