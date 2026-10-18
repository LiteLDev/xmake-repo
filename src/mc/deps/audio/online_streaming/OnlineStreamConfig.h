#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineStreamConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> maxBufferedBytes;
    ::ll::TypedStorage<8, 8, ulong> fetchRequestSizeBytes;
    ::ll::TypedStorage<4, 4, float> prefetchMultiplier;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk1ceec7;
    ::ll::UntypedStorage<8, 8> mUnk7d0287;
    ::ll::UntypedStorage<4, 4> mUnk2015a3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    OnlineStreamConfig& operator=(OnlineStreamConfig const&);
    OnlineStreamConfig(OnlineStreamConfig const&);
    OnlineStreamConfig();
#endif // @header-generator platform
};

} // namespace Audio
