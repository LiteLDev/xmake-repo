#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class DamageOverTimeComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DamageOverTimeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mDamagePerHurt;
    ::ll::TypedStorage<4, 4, float> mTimeBetweenHurt;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::DamageOverTimeComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageOverTimeDefinition>>&);
    // NOLINTEND
};
