#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/SchemaConverterNodeEntry.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonUtil {

class SchemaConverterNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<JsonUtil::SchemaConverterNodeEntry>> mStack;
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaConverterNode& operator=(SchemaConverterNode const&);
};

} // namespace JsonUtil
