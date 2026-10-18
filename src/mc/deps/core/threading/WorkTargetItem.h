#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Details {

struct WorkTargetItem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mWorkerCount;
    ::ll::TypedStorage<8, 8, ulong> mKickCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mWorkerCount;
    ::ll::TypedStorage<8, 8, uint64> mKickCount;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst::Details
