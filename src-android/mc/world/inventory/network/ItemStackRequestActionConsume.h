#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

// auto generated forward declare list
// clang-format off
struct ItemStackRequestSlotInfo;
// clang-format on

class ItemStackRequestActionConsume : public ::ItemStackRequestActionTransferBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestActionConsume();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionConsume(uchar, ::ItemStackRequestSlotInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uchar, ::ItemStackRequestSlotInfo const&);
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
