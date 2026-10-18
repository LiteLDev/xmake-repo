#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct TagsProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mTagExpression;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mTagExpression;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BlockDescriptorSerializer
