#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContainerValidationBase() = default;

    virtual bool isValidSlotForContainer(::ContainerScreenContext const&, ::Container const&, int const) const;

    virtual bool isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;

    virtual int getAvailableSetCount(int const, ::ItemStackBase const&) const;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    virtual bool isItemAllowedToRemove(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    virtual bool canItemMoveToContainer(::ItemStackBase const&) const;

    virtual bool canDestroy(::ContainerScreenContext const&) const;

    virtual int getContainerOffset(::ContainerScreenContext const&) const;

    virtual int getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValidSlotForContainer(::ContainerScreenContext const&, ::Container const&, int const) const;

    MCNAPI bool
    $isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;

    MCNAPI int $getAvailableSetCount(int const, ::ItemStackBase const&) const;

    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCNAPI bool $isItemAllowedToRemove(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCNAPI bool $canItemMoveToContainer(::ItemStackBase const&) const;

    MCNAPI bool $canDestroy(::ContainerScreenContext const&) const;

    MCNAPI int $getContainerOffset(::ContainerScreenContext const&) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // NOLINTEND
};
