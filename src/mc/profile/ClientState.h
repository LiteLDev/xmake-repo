#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct ClientState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mEcoModeThrottling;
    ::ll::TypedStorage<1, 1, bool> mIsPerfContextTicking;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk688fc0;
    ::ll::UntypedStorage<1, 1> mUnkb3c649;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ClientState& operator=(ClientState const&);
    ClientState(ClientState const&);
    ClientState();
#endif // @header-generator platform
};

} // namespace Bedrock::Profiling::Orchestrator
