#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemDescriptor;
class ItemStackBase;
class Recipes;
// clang-format on

class EnchantingInputContainerController : public ::ContainerController {
public:
    // prevent constructor by default
    EnchantingInputContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingInputContainerController();

    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EnchantingInputContainerController(std::shared_ptr<ContainerModel>);
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
