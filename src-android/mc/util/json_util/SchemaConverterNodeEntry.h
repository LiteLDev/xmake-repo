#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonUtil {

class SchemaConverterNodeEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>   mName;
    ::ll::TypedStorage<8, 8, ::Json::Value&> mNode;
    ::ll::TypedStorage<8, 8, ulong>          mIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaConverterNodeEntry& operator=(SchemaConverterNodeEntry const&);
    SchemaConverterNodeEntry();
};

} // namespace JsonUtil
