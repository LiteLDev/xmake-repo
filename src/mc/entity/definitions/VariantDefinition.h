#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct VariantDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mVariantChoice;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk48dbb7;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, VariantDefinition>>&);
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    VariantDefinition& operator=(VariantDefinition const&);
    VariantDefinition(VariantDefinition const&);
    VariantDefinition();
#endif // @header-generator platform
};
