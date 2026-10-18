#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct FetcherConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                                 requestSizeBytes;
    ::ll::TypedStorage<4, 4, float>                                                 prefetchMultiplier;
    ::ll::TypedStorage<4, 4, uint>                                                  maxAttempts;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>>    thinBufferTimeout;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>>    healthyBufferTimeout;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> retryBackoffBaseTime;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkcc34da;
    ::ll::UntypedStorage<4, 4> mUnke1d5a1;
    ::ll::UntypedStorage<4, 4> mUnk6f4843;
    ::ll::UntypedStorage<8, 8> mUnk4cce7b;
    ::ll::UntypedStorage<8, 8> mUnka3e58e;
    ::ll::UntypedStorage<8, 8> mUnk70fe78;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FetcherConfig& operator=(FetcherConfig const&);
    FetcherConfig(FetcherConfig const&);
    FetcherConfig();
#endif // @header-generator platform
};

} // namespace Audio
