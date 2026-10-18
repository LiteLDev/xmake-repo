#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ItemStackRequestSlotInfo;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class ItemStackRequestActionTake : public ::ItemStackRequestActionTransferBase {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestActionTake();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionTake(uchar, ::ItemStackRequestSlotInfo const&, ::ItemStackRequestSlotInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uchar, ::ItemStackRequestSlotInfo const&, ::ItemStackRequestSlotInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

#else // @header-generator platform
#endif // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
