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

struct DyeableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mInteractText;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3078a5;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DyeableDefinition>>&);
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    DyeableDefinition& operator=(DyeableDefinition const&);
    DyeableDefinition(DyeableDefinition const&);
    DyeableDefinition();
#endif // @header-generator platform
};
