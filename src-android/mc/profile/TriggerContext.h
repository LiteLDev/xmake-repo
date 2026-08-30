#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct TriggerContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view>                              mTriggerReason;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<60, 1>>> mWorldSessionLengthMins;
    // NOLINTEND
};

} // namespace Bedrock::Profiling::Orchestrator
