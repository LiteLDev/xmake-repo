#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class HorseEquipContainerValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mArmorAllowedItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mSaddleAllowedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    HorseEquipContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HorseEquipContainerValidation();

    virtual bool isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;

    virtual int getAvailableSetCount(int, ::ItemStackBase const&) const;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    virtual int getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HorseEquipContainerValidation(::ContainerScreenContext const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerScreenContext const&);
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

    MCNAPI int $getAvailableSetCount(int, ::ItemStackBase const&) const;

    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
