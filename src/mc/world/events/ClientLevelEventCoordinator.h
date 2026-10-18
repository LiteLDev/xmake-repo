#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/LevelEventCoordinator.h"

#if defined(LL_PLAT_A) // @header-generator platform
class ClientLevelEventCoordinator : public ::LevelEventCoordinator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientLevelEventCoordinator();
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
class ClientLevelEventCoordinator : public ::LevelEventCoordinator {};
#endif // @header-generator platform
