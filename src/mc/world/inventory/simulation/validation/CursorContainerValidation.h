#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class CursorContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CursorContainerValidation();
#else // @header-generator platform
    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canItemMoveToContainer(::ItemStackBase const&) const;

    virtual int getContainerOffset(::ContainerScreenContext const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canItemMoveToContainer(::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD bool $canItemMoveToContainer(::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerOffset(::ContainerScreenContext const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD int $getContainerOffset(::ContainerScreenContext const& screenContext) const;
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
