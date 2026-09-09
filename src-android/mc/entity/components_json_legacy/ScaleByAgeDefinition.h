#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ScaleByAgeComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ScaleByAgeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mStartScale;
    ::ll::TypedStorage<4, 4, float> mEndScale;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScaleByAgeDefinition();

    MCNAPI void initialize(::EntityContext&, ::ScaleByAgeComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ScaleByAgeDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
