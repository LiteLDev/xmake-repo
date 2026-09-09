#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/BoostItem.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class BoostableComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BoostableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BoostItem>> mBoostItems;
    ::ll::TypedStorage<4, 4, float>                   mMaxBoostTime;
    ::ll::TypedStorage<4, 4, float>                   mSpeedModifier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::BoostableComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BoostableDefinition>>&);
    // NOLINTEND
};
