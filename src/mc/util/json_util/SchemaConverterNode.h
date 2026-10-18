#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/json_util/SchemaConverterNodeEntry.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonUtil {

class SchemaConverterNode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<JsonUtil::SchemaConverterNodeEntry>> mStack;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk3a1b5d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaConverterNode& operator=(SchemaConverterNode const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SchemaConverterNode(SchemaConverterNode const&);
    SchemaConverterNode();
#endif // @header-generator platform
};

} // namespace JsonUtil
