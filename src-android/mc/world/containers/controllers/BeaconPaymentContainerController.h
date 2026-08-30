#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemStackBase;
class Recipes;
// clang-format on

class BeaconPaymentContainerController : public ::ContainerController {
public:
    // prevent constructor by default
    BeaconPaymentContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconPaymentContainerController();

    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BeaconPaymentContainerController(std::shared_ptr<ContainerModel>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ContainerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
