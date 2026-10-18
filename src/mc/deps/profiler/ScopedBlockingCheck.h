#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class ScopedBlockingCheck {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mPriorCallback;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mPriorCallback;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScopedBlockingCheck();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Bedrock::Threading
