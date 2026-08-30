#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct StandardStringSizeTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mZero;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mSmall1;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mSmall2;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mBig;
    // NOLINTEND
};

} // namespace Bedrock
