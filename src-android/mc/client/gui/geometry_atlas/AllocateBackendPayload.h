#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

struct AllocateBackendPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mCurrentAttempt;
    // NOLINTEND
};

} // namespace GeometryAtlas
