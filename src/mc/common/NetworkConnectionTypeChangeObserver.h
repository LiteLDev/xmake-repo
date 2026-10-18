#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/NetworkChangeObserver.h"
#include "mc/deps/core/NetworkConnectionType.h"

class NetworkConnectionTypeChangeObserver : public ::NetworkChangeObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetNetworkConnectionType;
    ::ll::UntypedStorage<8, 48> mFireNetworkChangedEvent;
    ::ll::UntypedStorage<1, 16> mNetworkConnectionType;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkConnectionTypeChangeObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkConnectionTypeChangeObserver();

    virtual void onNetworkConfigurationChanged();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onNetworkConfigurationChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class NetworkConnectionTypeChangeObserver {};
#endif // @header-generator platform
