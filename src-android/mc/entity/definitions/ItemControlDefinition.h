#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class Item;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ItemControlDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::set<const Item*>> mControlItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addItemByName(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ItemControlDefinition>>&);
    // NOLINTEND
};
