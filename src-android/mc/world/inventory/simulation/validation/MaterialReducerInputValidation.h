#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/CraftableCompounds.h"
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class BlockReducer;
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class MaterialReducerInputValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockReducer*>        mBlockReducer;
    ::ll::TypedStorage<8, 168, ::CraftableCompounds> mCraftableCompounds;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialReducerInputValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MaterialReducerInputValidation();

    virtual bool isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;

    virtual int getAvailableSetCount(int, ::ItemStackBase const&) const;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    virtual bool canDestroy(::ContainerScreenContext const&) const;

    virtual int getContainerOffset(::ContainerScreenContext const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MaterialReducerInputValidation(::ContainerScreenContext const&);

    MCNAPI bool isItemAllowed(::ItemStackBase const&) const;
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

    MCNAPI bool $canDestroy(::ContainerScreenContext const&) const;

    MCNAPI int $getContainerOffset(::ContainerScreenContext const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
