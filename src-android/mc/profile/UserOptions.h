#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct UserOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mIsAutomationRun;
    ::ll::TypedStorage<1, 1, uchar> mGraphicsMode;
    ::ll::TypedStorage<4, 4, int>   mGraphicsQualityPresetMode;
    // NOLINTEND
};

} // namespace Bedrock::Profiling::Orchestrator
