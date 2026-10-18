#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GameEventMovementTrackingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GameEventMovementTrackingDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mEmitMove;
    ::ll::TypedStorage<1, 1, bool> mEmitSwim;
    ::ll::TypedStorage<1, 1, bool> mEmitFlap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::GameEventMovementTrackingComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::GameEventMovementTrackingComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void buildSchema(
        std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GameEventMovementTrackingDefinition>>&
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GameEventMovementTrackingDefinition>>& root
#endif // @header-generator platform
    );
    // NOLINTEND
};
