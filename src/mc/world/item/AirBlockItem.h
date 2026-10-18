#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

#if defined(LL_PLAT_A) // @header-generator platform
class AirBlockItem : public ::Item {
public:
    // prevent constructor by default
    AirBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AirBlockItem();
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
class AirBlockItem : public ::Item {};
#endif // @header-generator platform
