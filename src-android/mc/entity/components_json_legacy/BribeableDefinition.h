#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BribeableComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BribeableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                        mBribeCooldown;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mBribeItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addBribeItem(::ItemDescriptor const&);

    MCNAPI void initialize(::EntityContext&, ::BribeableComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BribeableDefinition>>&);
    // NOLINTEND
};
