#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/TransportLayer.h"
#else // @header-generator platform
#endif // @header-generator platform

class NetworkSession : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::TransportLayer const> mTransportLayer;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk280309;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NetworkSession& operator=(NetworkSession const&);
    NetworkSession(NetworkSession const&);
#endif // @header-generator platform
    NetworkSession();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NetworkSession();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~NetworkSession() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
