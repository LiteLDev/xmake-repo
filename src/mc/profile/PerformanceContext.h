#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct PerformanceContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view> mContext;
    ::ll::TypedStorage<1, 1, uchar>             mGraphicsMode;
    ::ll::TypedStorage<4, 4, int>               mGraphicsQualityPreset;
    ::ll::TypedStorage<1, 1, bool>              mIsThrottlingEnabled;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk4801b1;
    ::ll::UntypedStorage<1, 1>  mUnk4e00bd;
    ::ll::UntypedStorage<4, 4>  mUnkd3dc83;
    ::ll::UntypedStorage<1, 1>  mUnk39d307;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PerformanceContext& operator=(PerformanceContext const&);
    PerformanceContext(PerformanceContext const&);
    PerformanceContext();
#endif // @header-generator platform
};

} // namespace Bedrock::Profiling::Orchestrator
