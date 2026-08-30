#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class Trade1Ingredient2ContainerValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsServerSide;
    // NOLINTEND

public:
    // prevent constructor by default
    Trade1Ingredient2ContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Trade1Ingredient2ContainerValidation();

    virtual bool isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;

    virtual int getContainerOffset(::ContainerScreenContext const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Trade1Ingredient2ContainerValidation(bool const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool const);
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
