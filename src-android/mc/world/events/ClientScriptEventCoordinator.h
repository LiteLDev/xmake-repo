#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ClientScriptEventListener.h"
#include "mc/world/events/EventCoordinator.h"

class ClientScriptEventCoordinator : public ::EventCoordinator<ClientScriptEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientScriptEventCoordinator();
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
