#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineStreamParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> totalSamples;
    // NOLINTEND
};

} // namespace Audio
