#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/AbstractCompassItem.h"

class RecoveryCompassItem : public ::AbstractCompassItem {
public:
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
