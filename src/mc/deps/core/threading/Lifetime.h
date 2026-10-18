#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Details {

#if defined(LL_PLAT_A) // @header-generator platform
class Lifetime {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mLifetime;
    // NOLINTEND
};
#else // @header-generator platform
class Lifetime {};
#endif // @header-generator platform

} // namespace Bedrock::Threading::Burst::Details
