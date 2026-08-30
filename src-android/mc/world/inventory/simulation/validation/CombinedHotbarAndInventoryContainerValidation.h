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

class CombinedHotbarAndInventoryContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CombinedHotbarAndInventoryContainerValidation();

    virtual bool isItemAllowedToRemove(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    virtual bool canItemMoveToContainer(::ItemStackBase const&) const;

    virtual int getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isItemAllowedToRemove(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCNAPI bool $canItemMoveToContainer(::ItemStackBase const&) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
