#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct UserOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>  mIsAutomationRun;
    ::ll::TypedStorage<1, 1, uchar> mGraphicsMode;
    ::ll::TypedStorage<4, 4, int>   mGraphicsQualityPresetMode;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk6f03fa;
    ::ll::UntypedStorage<1, 1> mUnk4896be;
    ::ll::UntypedStorage<4, 4> mUnkb8b300;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    UserOptions& operator=(UserOptions const&);
    UserOptions(UserOptions const&);
    UserOptions();
#endif // @header-generator platform
};

} // namespace Bedrock::Profiling::Orchestrator
