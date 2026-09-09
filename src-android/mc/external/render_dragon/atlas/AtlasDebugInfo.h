#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::atlas {

struct AtlasDebugInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uint>> mDirtyQueue;
    ::ll::TypedStorage<8, 24, std::vector<uint>> mRenderedThisFrame;
    ::ll::TypedStorage<8, 24, std::vector<uint>> mEligibleThisFrame;
    // NOLINTEND
};

} // namespace dragon::atlas
