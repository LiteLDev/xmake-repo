#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct RailMovementComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RailMovementDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMaxSpeed;
    // NOLINTEND

public:
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
};
