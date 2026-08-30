#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class BrewingStandResultContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BrewingStandResultContainerValidation();

    virtual bool isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;

    virtual int getAvailableSetCount(int const, ::ItemStackBase const&) const;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    virtual int getContainerOffset(::ContainerScreenContext const&) const;

    virtual int getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
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

    MCNAPI int $getAvailableSetCount(int const, ::ItemStackBase const&) const;

    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCNAPI int $getContainerOffset(::ContainerScreenContext const&) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
