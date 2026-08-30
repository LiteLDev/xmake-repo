#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct PerformanceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view> mContext;
    ::ll::TypedStorage<1, 1, uchar>             mGraphicsMode;
    ::ll::TypedStorage<4, 4, int>               mGraphicsQualityPreset;
    ::ll::TypedStorage<1, 1, bool>              mIsThrottlingEnabled;
    // NOLINTEND
};

} // namespace Bedrock::Profiling::Orchestrator
