#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/EquipmentTable.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EquipmentTableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::EquipmentTable> mEquipmentTable;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 56> mUnkfce7f6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EquipmentTableDefinition& operator=(EquipmentTableDefinition const&);
    EquipmentTableDefinition(EquipmentTableDefinition const&);
    EquipmentTableDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EquipmentTableDefinition();

    MCNAPI void _setLootTable(std::string const&);
#else // @header-generator platform
    MCAPI void _setLootTable(::std::string const& lootTable);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EquipmentTableDefinition>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EquipmentTableDefinition>> const&
            root
    );
#endif // @header-generator platform
    // NOLINTEND
};
