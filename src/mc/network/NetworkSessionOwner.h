#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/TransportLayer.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class NetworkSession;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class NetworkSessionOwner : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetworkSession>> mNetworkSession;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnka4b08c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NetworkSessionOwner& operator=(NetworkSessionOwner const&);
    NetworkSessionOwner(NetworkSessionOwner const&);
    NetworkSessionOwner();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NetworkSessionOwner();
#else // @header-generator platform
    virtual ~NetworkSessionOwner() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NetworkSessionOwner();

    MCNAPI void createNetworkSession(::TransportLayer const);

    MCNAPI void destroyNetworkSession();

    MCNAPI ::TransportLayer getTransportLayer() const;

    MCNAPI bool hasNetworkSession() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void createNetworkSession(::TransportLayer transportLayer);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
