#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsCollidableDefinition {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&) const;

    MCNAPI void uninitialize(::EntityContext&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, IsCollidableDefinition>>&);
    // NOLINTEND
};
