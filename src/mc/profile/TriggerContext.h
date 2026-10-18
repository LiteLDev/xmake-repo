#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct TriggerContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view>                              mTriggerReason;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<60, 1>>> mWorldSessionLengthMins;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk7da85c;
    ::ll::UntypedStorage<4, 4>  mUnk248759;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TriggerContext& operator=(TriggerContext const&);
    TriggerContext(TriggerContext const&);
    TriggerContext();
#endif // @header-generator platform
};

} // namespace Bedrock::Profiling::Orchestrator
