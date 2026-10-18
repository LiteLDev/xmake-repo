#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/TransportLayer.h"
#else // @header-generator platform
#endif // @header-generator platform

class NetworkSummary {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mGetNetworkType;
    ::ll::UntypedStorage<8, 48> mIsInGame;
    ::ll::UntypedStorage<8, 48> mIsSignedIntoSignalingService;
    ::ll::UntypedStorage<8, 48> mIsHostingLocalDedicatedServer;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk872831;
    ::ll::UntypedStorage<8, 64> mUnk4d3354;
    ::ll::UntypedStorage<8, 64> mUnkb709ee;
    ::ll::UntypedStorage<8, 64> mUnk2237e4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NetworkSummary& operator=(NetworkSummary const&);
    NetworkSummary(NetworkSummary const&);
#endif // @header-generator platform
    NetworkSummary();
};
