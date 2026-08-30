#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct PhysicsComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct PhysicsDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mHasGravity;
    ::ll::TypedStorage<1, 1, bool> mHasCollision;
    ::ll::TypedStorage<1, 1, bool> mPushTowardsClosestSpace;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::PhysicsComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PhysicsDefinition>>&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& HAS_COLLISION_DEFAULT();

    MCNAPI static bool const& HAS_GRAVITY_DEFAULT();

    MCNAPI static bool const& PUSH_TOWARDS_CLOSEST_SPACE_DEFAULT();
    // NOLINTEND
};
