#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/ColorDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct Color2Definition : public ::ColorDefinition {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, Color2Definition>>&);
    // NOLINTEND
};
#else // @header-generator platform
struct Color2Definition : public ::ColorDefinition {};
#endif // @header-generator platform
