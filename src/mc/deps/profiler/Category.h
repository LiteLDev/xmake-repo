#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct Category {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view> mName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk316a96;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Category& operator=(Category const&);
    Category(Category const&);
    Category();
#endif // @header-generator platform
};

} // namespace Bedrock::Profiler::details
