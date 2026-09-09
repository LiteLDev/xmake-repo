#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TransportLayer.h"

class NetworkSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetNetworkType;
    ::ll::UntypedStorage<8, 48> mIsInGame;
    ::ll::UntypedStorage<8, 48> mIsSignedIntoSignalingService;
    ::ll::UntypedStorage<8, 48> mIsHostingLocalDedicatedServer;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSummary();
};
