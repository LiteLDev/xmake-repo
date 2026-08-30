#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
// clang-format on

class MaterialReducerOutputValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MaterialReducerOutputValidation();

    virtual bool canDestroy(::ContainerScreenContext const&) const;

    virtual int getContainerOffset(::ContainerScreenContext const&) const;

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
    MCNAPI bool $canDestroy(::ContainerScreenContext const&) const;

    MCNAPI int $getContainerOffset(::ContainerScreenContext const&) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
