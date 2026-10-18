#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/item/ItemDescriptor.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace JsonUtil { class EmptyClass; }
#else // @header-generator platform
class ItemDescriptor;
#endif // @header-generator platform
// clang-format on

class EquipItemDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mEquipItemExclusionList;
    ::ll::TypedStorage<1, 1, bool>                         mCanWearArmor;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk282f0a;
    ::ll::UntypedStorage<1, 1>  mUnk79dfb0;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EquipItemDefinition& operator=(EquipItemDefinition const&);
    EquipItemDefinition(EquipItemDefinition const&);
    EquipItemDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addExcludeItemByName(::ItemDescriptor const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EquipItemDefinition>>&);
#else // @header-generator platform
    MCAPI void addExcludeItemByName(::ItemDescriptor const& itemDescriptor);
#endif // @header-generator platform
    // NOLINTEND
};
