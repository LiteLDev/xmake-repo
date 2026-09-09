#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Details {

class Lifetime {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mLifetime;
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst::Details
