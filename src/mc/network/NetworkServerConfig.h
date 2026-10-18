#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkPermissions.h"
#include "mc/network/ServerPlayerJoinBehavior.h"

struct NetworkServerConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>               serverType;
    ::ll::TypedStorage<1, 1, bool>                       requireTrustedAuthentication;
    ::ll::TypedStorage<1, 1, bool>                       requireNonce;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>  extraTrustedKeys;
    ::ll::TypedStorage<1, 1, ::NetworkPermissions>       networkPermissions;
    ::ll::TypedStorage<1, 1, bool>                       allowSubclientLogin;
    ::ll::TypedStorage<1, 1, bool>                       enablePacketReceiptEventing;
    ::ll::TypedStorage<4, 4, ::ServerPlayerJoinBehavior> defaultJoinBehavior;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                serverType;
    ::ll::TypedStorage<1, 1, bool>                          requireTrustedAuthentication;
    ::ll::TypedStorage<1, 1, bool>                          requireNonce;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> extraTrustedKeys;
    ::ll::TypedStorage<1, 1, ::NetworkPermissions>          networkPermissions;
    ::ll::TypedStorage<1, 1, bool>                          allowSubclientLogin;
    ::ll::TypedStorage<1, 1, bool>                          enablePacketReceiptEventing;
    ::ll::TypedStorage<4, 4, ::ServerPlayerJoinBehavior>    defaultJoinBehavior;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkServerConfig& operator=(NetworkServerConfig const&);
    NetworkServerConfig();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~NetworkServerConfig();
#else // @header-generator platform
    MCAPI NetworkServerConfig(::NetworkServerConfig const&);

    MCAPI ~NetworkServerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetworkServerConfig const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
