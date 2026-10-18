#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BribeableComponent;
class EntityContext;
#else // @header-generator platform
class ItemDescriptor;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BribeableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                        mBribeCooldown;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mBribeItems;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                            mBribeCooldown;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mBribeItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addBribeItem(::ItemDescriptor const&);

    MCNAPI void initialize(::EntityContext&, ::BribeableComponent&) const;
#else // @header-generator platform
    MCAPI void addBribeItem(::ItemDescriptor const& itemDescriptor);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BribeableDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BribeableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
