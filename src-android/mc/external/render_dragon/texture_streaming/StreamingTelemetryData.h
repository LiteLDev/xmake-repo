#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct StreamingTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mTotalMemoryUsed;
    // NOLINTEND
};

} // namespace dragon::texturestreaming
