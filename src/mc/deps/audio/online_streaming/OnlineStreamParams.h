#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineStreamParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> totalSamples;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk55988f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    OnlineStreamParams& operator=(OnlineStreamParams const&);
    OnlineStreamParams(OnlineStreamParams const&);
    OnlineStreamParams();
#endif // @header-generator platform
};

} // namespace Audio
