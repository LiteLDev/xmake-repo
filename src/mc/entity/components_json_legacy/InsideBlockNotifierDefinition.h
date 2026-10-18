#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components/InsideBlockEventMap.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class InsideBlockNotifierComponent;
#else // @header-generator platform
class InsideBlockEventMap;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InsideBlockNotifierDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<InsideBlockEventMap>> mBlockList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::InsideBlockNotifierComponent&) const;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::InsideBlockEventMap>> mBlockList;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InsideBlockNotifierDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::InsideBlockNotifierDefinition>>&
            root
    );
#endif // @header-generator platform
    // NOLINTEND
};
