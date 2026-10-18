#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct RailMovementComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class RailMovementDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mMaxSpeed;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk7dde41;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI RailMovementDefinition();

    MCNAPI void initialize(::EntityContext&, ::RailMovementComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, RailMovementDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    RailMovementDefinition& operator=(RailMovementDefinition const&);
    RailMovementDefinition(RailMovementDefinition const&);
    RailMovementDefinition();
#endif // @header-generator platform
};
