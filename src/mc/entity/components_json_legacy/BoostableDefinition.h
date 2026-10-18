#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/BoostItem.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BoostableComponent;
class EntityContext;
#else // @header-generator platform
struct BoostItem;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BoostableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BoostItem>> mBoostItems;
    ::ll::TypedStorage<4, 4, float>                   mMaxBoostTime;
    ::ll::TypedStorage<4, 4, float>                   mSpeedModifier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::BoostableComponent&) const;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BoostItem>> mBoostItems;
    ::ll::TypedStorage<4, 4, float>                       mMaxBoostTime;
    ::ll::TypedStorage<4, 4, float>                       mSpeedModifier;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BoostableDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BoostableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
