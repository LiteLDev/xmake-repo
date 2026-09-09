#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ItemDescriptor;
class ItemStackBase;
// clang-format on

class DynamicContainerValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName> mContainerName;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DynamicContainerValidation();

    virtual bool isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    virtual bool canItemMoveToContainer(::ItemStackBase const&) const;

    virtual int getContainerOffset(::ContainerScreenContext const&) const;

    virtual int getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DynamicContainerValidation(::FullContainerName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isAllowedItemInVector(::ItemDescriptor const&, std::vector<ItemDescriptor> const&);

    MCNAPI static bool isBannedItemInVector(::ItemDescriptor const&, std::vector<ItemDescriptor> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FullContainerName);
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

    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCNAPI bool $canItemMoveToContainer(::ItemStackBase const&) const;

    MCNAPI int $getContainerOffset(::ContainerScreenContext const&) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
