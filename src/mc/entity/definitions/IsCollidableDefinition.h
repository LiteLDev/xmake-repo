#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
namespace JsonUtil { class EmptyClass; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct IsCollidableDefinition {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&) const;

    MCNAPI void uninitialize(::EntityContext&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, IsCollidableDefinition>>&);
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity) const;
#endif // @header-generator platform
    // NOLINTEND
};
