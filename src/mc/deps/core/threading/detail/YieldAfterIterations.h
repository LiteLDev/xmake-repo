#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Detail {

class YieldAfterIterations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mCounter;
    ::ll::TypedStorage<2, 2, ushort> mIterationsBeforeYielding;
    ::ll::TypedStorage<2, 2, ushort> mYieldCount;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    YieldAfterIterations();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Bedrock::Threading::Detail
