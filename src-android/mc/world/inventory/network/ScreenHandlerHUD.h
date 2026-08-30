#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ScreenHandlerBase.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestAction;
class ItemStackRequestActionHandler;
// clang-format on

class ScreenHandlerHUD : public ::ScreenHandlerBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenHandlerHUD();

    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult $handleAction(::ItemStackRequestAction const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
