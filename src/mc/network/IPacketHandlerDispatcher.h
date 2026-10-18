#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class NetEventCallback;
class NetworkIdentifier;
class Packet;
// clang-format on
#endif // @header-generator platform

class IPacketHandlerDispatcher {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IPacketHandlerDispatcher();
#else // @header-generator platform
    virtual ~IPacketHandlerDispatcher() = default;

    virtual void handle(
        ::NetworkIdentifier const&   source,
        ::NetEventCallback&          callback,
        ::std::shared_ptr<::Packet>& packet
    ) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // virtual function thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
