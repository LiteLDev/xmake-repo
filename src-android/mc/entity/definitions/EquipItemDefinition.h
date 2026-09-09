#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EquipItemDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mEquipItemExclusionList;
    ::ll::TypedStorage<1, 1, bool>                         mCanWearArmor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addExcludeItemByName(::ItemDescriptor const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EquipItemDefinition>>&);
    // NOLINTEND
};
