#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Analysis {

struct SystemIndexAndTotalCost {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                                           mSystemIndex;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>> mTotalCost;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkd949a7;
    ::ll::UntypedStorage<8, 8> mUnk67e935;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SystemIndexAndTotalCost& operator=(SystemIndexAndTotalCost const&);
    SystemIndexAndTotalCost(SystemIndexAndTotalCost const&);
    SystemIndexAndTotalCost();
#endif // @header-generator platform
};

} // namespace ECS::Profiling::Analysis
