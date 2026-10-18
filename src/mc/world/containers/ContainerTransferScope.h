#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class SimpleSparseContainer;
// clang-format on

struct ContainerTransferScope {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContainerTransferScope();
#else // @header-generator platform
    virtual ~ContainerTransferScope() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void createItem(::ItemStack const&, std::shared_ptr<SimpleSparseContainer>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void createItem(::ItemStack const& item, ::std::shared_ptr<::SimpleSparseContainer> createdOutputContainer);
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
