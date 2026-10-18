#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/ClientNetworkEventListener.h"
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
struct ClientMessageEvent;
// clang-format on

class ClientNetworkEventCoordinator : public ::EventCoordinator<ClientNetworkEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientNetworkEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void sendMessage(::ClientMessageEvent const&);
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
#else // @header-generator platform
class ClientNetworkEventCoordinator {};
#endif // @header-generator platform
