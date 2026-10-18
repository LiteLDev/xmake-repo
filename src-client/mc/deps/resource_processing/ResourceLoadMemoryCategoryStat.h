#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct ResourceLoadMemoryCategoryStat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>  mDeltaInB;
    ::ll::TypedStorage<8, 8, ulong> mPeakInB;
    ::ll::TypedStorage<8, 8, ulong> mAllocCount;
    // NOLINTEND
};

} // namespace Bedrock::Resources
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
