#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerTransferScope.h"
#include "mc/world/inventory/network/ItemStackRequestScope.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class SimpleSparseContainer;
// clang-format on

struct ContainerTransferClientScope : public ::ContainerTransferScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemStackRequestScope> mItemStackRequestScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerTransferClientScope();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerTransferClientScope();

    virtual void createItem(::ItemStack const&, std::shared_ptr<SimpleSparseContainer>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $createItem(::ItemStack const&, std::shared_ptr<SimpleSparseContainer>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
