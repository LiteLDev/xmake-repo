#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Details {

struct WorkTargetItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mWorkerCount;
    ::ll::TypedStorage<8, 8, ulong> mKickCount;
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst::Details
