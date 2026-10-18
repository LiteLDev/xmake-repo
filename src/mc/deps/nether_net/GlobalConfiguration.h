#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/ThreadConfiguration.h"
#include "mc/deps/nether_net/LogSeverity.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet {

struct GlobalConfiguration {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, unsigned long long>       mApplicationUniqueID;
    ::ll::TypedStorage<2, 2, ushort>                   mBroadcastLANPort;
    ::ll::TypedStorage<4, 4, uint>                     mBroadcastPollIntervalMS;
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration>   mThreadInitSignaling;
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration>   mThreadInitNetwork;
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration>   mThreadInitWorker;
    ::ll::TypedStorage<8, 32, ::ThreadConfiguration>   mThreadInitLAN;
    ::ll::TypedStorage<4, 4, ::NetherNet::LogSeverity> mDefaultLogSeverity;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk2e0ef9;
    ::ll::UntypedStorage<2, 2>  mUnk588a61;
    ::ll::UntypedStorage<4, 4>  mUnk4efd41;
    ::ll::UntypedStorage<8, 32> mUnka96767;
    ::ll::UntypedStorage<8, 32> mUnk6dd774;
    ::ll::UntypedStorage<8, 32> mUnk14d913;
    ::ll::UntypedStorage<8, 32> mUnkdc1ead;
    ::ll::UntypedStorage<4, 4>  mUnkc4b228;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GlobalConfiguration& operator=(GlobalConfiguration const&);
    GlobalConfiguration(GlobalConfiguration const&);
    GlobalConfiguration();
#endif // @header-generator platform
};

} // namespace NetherNet
