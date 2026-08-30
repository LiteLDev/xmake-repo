#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GrowsCropComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GrowsCropDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mCharges;
    ::ll::TypedStorage<4, 4, float> mChance;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GrowsCropDefinition();

    MCNAPI void initialize(::EntityContext&, ::GrowsCropComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GrowsCropDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
