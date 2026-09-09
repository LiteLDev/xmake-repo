#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
class NetworkSession;
// clang-format on

class NetworkSessionOwner : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetworkSession>> mNetworkSession;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkSessionOwner();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
