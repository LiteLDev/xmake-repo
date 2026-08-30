#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkSystem;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
// clang-format on

struct ServerNetworkHandlerDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mSignAllMultiplayerServicesIntoSignalingService;
    ::ll::UntypedStorage<8, 64> mAddClientBlobCacheTime;
    ::ll::UntypedStorage<8, 64> mAddClientBlobCacheStats;
    ::ll::UntypedStorage<8, 64> mCollectTransferData;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNetworkHandlerDependencies& operator=(ServerNetworkHandlerDependencies const&);
    ServerNetworkHandlerDependencies(ServerNetworkHandlerDependencies const&);
    ServerNetworkHandlerDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerNetworkHandlerDependencies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
