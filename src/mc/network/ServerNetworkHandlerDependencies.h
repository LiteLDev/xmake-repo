#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkSystem;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ServerNetworkHandlerDependencies {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> mSignAllMultiplayerServicesIntoSignalingService;
    ::ll::UntypedStorage<8, 64> mAddClientBlobCacheTime;
    ::ll::UntypedStorage<8, 64> mAddClientBlobCacheStats;
    ::ll::UntypedStorage<8, 64> mCollectTransferData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkf3d96f;
    ::ll::UntypedStorage<8, 64> mUnkfd17ee;
    ::ll::UntypedStorage<8, 64> mUnkd1ecc1;
    ::ll::UntypedStorage<8, 64> mUnk8bf486;
#endif // @header-generator platform
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
