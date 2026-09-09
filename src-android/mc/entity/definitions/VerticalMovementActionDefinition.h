#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct VerticalMovementActionComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct VerticalMovementActionDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mVerticalVelocity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VerticalMovementActionDefinition();

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
    // NOLINTEND
};
