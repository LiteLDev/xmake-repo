#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
struct VerticalMovementActionComponent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace JsonUtil { class EmptyClass; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct VerticalMovementActionDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mVerticalVelocity;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk30b936;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    VerticalMovementActionDefinition& operator=(VerticalMovementActionDefinition const&);
    VerticalMovementActionDefinition(VerticalMovementActionDefinition const&);
    VerticalMovementActionDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI VerticalMovementActionDefinition();
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::VerticalMovementActionComponent& component) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::VerticalMovementActionComponent&) const;

    MCNAPI void uninitialize(::EntityContext&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, VerticalMovementActionDefinition>>&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void uninitialize(::EntityContext& entity) const;
#endif // @header-generator platform
    // NOLINTEND
};
