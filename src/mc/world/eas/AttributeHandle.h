#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class AttributeHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkb108e1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AttributeHandle& operator=(AttributeHandle const&);
    AttributeHandle(AttributeHandle const&);
    AttributeHandle();
#endif // @header-generator platform
};

} // namespace EAS
