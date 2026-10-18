#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonUtil {

class SchemaConverterNodeEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>   mName;
    ::ll::TypedStorage<8, 8, ::Json::Value&> mNode;
    ::ll::TypedStorage<8, 8, ulong>          mIndex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk67f007;
    ::ll::UntypedStorage<8, 8>  mUnk1b7951;
    ::ll::UntypedStorage<8, 8>  mUnk595c89;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaConverterNodeEntry& operator=(SchemaConverterNodeEntry const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SchemaConverterNodeEntry(SchemaConverterNodeEntry const&);
#endif // @header-generator platform
    SchemaConverterNodeEntry();
};

} // namespace JsonUtil
