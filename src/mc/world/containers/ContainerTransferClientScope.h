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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ContainerTransferClientScope();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContainerTransferClientScope();

    virtual void createItem(::ItemStack const&, std::shared_ptr<SimpleSparseContainer>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void
    createItem(::ItemStack const& item, ::std::shared_ptr<::SimpleSparseContainer> createdOutputContainer) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $createItem(::ItemStack const&, std::shared_ptr<SimpleSparseContainer>);
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $createItem(::ItemStack const& item, ::std::shared_ptr<::SimpleSparseContainer> createdOutputContainer);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
