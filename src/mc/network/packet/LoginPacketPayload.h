#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ConnectionRequest;
// clang-format on

struct LoginPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                mClientNetworkVersion;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ConnectionRequest>> mConnectionRequest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LoginPacketPayload(int, ::ConnectionRequest const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, ::ConnectionRequest const&);
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                    mClientNetworkVersion;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConnectionRequest>> mConnectionRequest;
#endif // @header-generator platform
    // NOLINTEND
};
