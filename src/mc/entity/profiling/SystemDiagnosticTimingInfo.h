#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

struct SystemDiagnosticTimingInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDisplayName;
    ::ll::TypedStorage<8, 8, ulong>        mSystemIndex;
    ::ll::TypedStorage<8, 8, ulong>        mTimeInNS;
    ::ll::TypedStorage<1, 1, uchar>        mPercentOfTotal;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk715bb0;
    ::ll::UntypedStorage<8, 8>  mUnk8edfc5;
    ::ll::UntypedStorage<8, 8>  mUnk7b35b7;
    ::ll::UntypedStorage<1, 1>  mUnkaae32a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SystemDiagnosticTimingInfo& operator=(SystemDiagnosticTimingInfo const&);
    SystemDiagnosticTimingInfo(SystemDiagnosticTimingInfo const&);
    SystemDiagnosticTimingInfo();
#endif // @header-generator platform
};

} // namespace ECS::Profiling::Diagnostics
