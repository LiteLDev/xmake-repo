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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mHasGravity;
    ::ll::TypedStorage<1, 1, bool> mHasCollision;
    ::ll::TypedStorage<1, 1, bool> mPushTowardsClosestSpace;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk5cf56a;
    ::ll::UntypedStorage<1, 1> mUnk73884b;
    ::ll::UntypedStorage<1, 1> mUnkfe14e4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PhysicsDefinition& operator=(PhysicsDefinition const&);
    PhysicsDefinition(PhysicsDefinition const&);
    PhysicsDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::PhysicsComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::PhysicsComponent&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PhysicsDefinition>>&);
#else // @header-generator platform
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::PhysicsDefinition>>& root);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool const& HAS_COLLISION_DEFAULT();
#else // @header-generator platform
    MCAPI static bool const& HAS_COLLISION_DEFAULT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool const& HAS_GRAVITY_DEFAULT();
#else // @header-generator platform
    MCAPI static bool const& HAS_GRAVITY_DEFAULT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool const& PUSH_TOWARDS_CLOSEST_SPACE_DEFAULT();
#else // @header-generator platform
    MCAPI static bool const& PUSH_TOWARDS_CLOSEST_SPACE_DEFAULT();
#endif // @header-generator platform
    // NOLINTEND
};
