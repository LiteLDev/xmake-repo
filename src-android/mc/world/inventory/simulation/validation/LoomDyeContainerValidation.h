#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class LoomDyeContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LoomDyeContainerValidation();

    virtual bool isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;

    virtual int getContainerOffset(::ContainerScreenContext const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;

    MCNAPI int $getContainerOffset(::ContainerScreenContext const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
