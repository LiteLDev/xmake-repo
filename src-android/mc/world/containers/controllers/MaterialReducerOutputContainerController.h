#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemStackBase;
// clang-format on

class MaterialReducerOutputContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsItemAllowed;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialReducerOutputContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MaterialReducerOutputContainerController();

    virtual bool isItemAllowed(::ItemStackBase const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MaterialReducerOutputContainerController(std::shared_ptr<ContainerModel>);

    MCNAPI void setItemAllowed(bool);
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
    MCNAPI bool $isItemAllowed(::ItemStackBase const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
