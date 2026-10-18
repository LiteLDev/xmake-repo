#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/AbstractCompassItem.h"

class RecoveryCompassItem : public ::AbstractCompassItem {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    RecoveryCompassItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecoveryCompassItem();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RecoveryCompassItem(std::string const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
