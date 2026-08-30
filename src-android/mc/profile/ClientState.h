#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct ClientState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mEcoModeThrottling;
    ::ll::TypedStorage<1, 1, bool> mIsPerfContextTicking;
    // NOLINTEND
};

} // namespace Bedrock::Profiling::Orchestrator
