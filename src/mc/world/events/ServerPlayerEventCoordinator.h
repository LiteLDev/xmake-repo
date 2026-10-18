#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/PlayerEventCoordinator.h"

#if defined(LL_PLAT_A) // @header-generator platform
class ServerPlayerEventCoordinator : public ::PlayerEventCoordinator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPlayerEventCoordinator();
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
class ServerPlayerEventCoordinator : public ::PlayerEventCoordinator {};
#endif // @header-generator platform
