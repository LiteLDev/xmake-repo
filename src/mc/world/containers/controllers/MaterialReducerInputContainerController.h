#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class BlockReducer;
class ContainerModel;
class ItemStackBase;
// clang-format on

class MaterialReducerInputContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>            mEnabled;
    ::ll::TypedStorage<8, 8, ::BlockReducer*> mBlockReducer;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialReducerInputContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MaterialReducerInputContainerController();

    virtual bool isItemAllowed(::ItemStackBase const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MaterialReducerInputContainerController(std::shared_ptr<ContainerModel>);

    MCNAPI void setBlockReducer(::BlockReducer*);
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
#else // @header-generator platform
class MaterialReducerInputContainerController {};
#endif // @header-generator platform
