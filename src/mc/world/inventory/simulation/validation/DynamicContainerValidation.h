#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemDescriptor;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackBase;
// clang-format on

class DynamicContainerValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName> mContainerName;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    DynamicContainerValidation();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~DynamicContainerValidation();
#else // @header-generator platform
    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;
#else // @header-generator platform
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canItemMoveToContainer(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const,
        ::ItemStackBase const& item,
        int const              amount,
        bool                   isInternalTransfer
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getContainerOffset(::ContainerScreenContext const&) const;

    virtual int getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DynamicContainerValidation(::FullContainerName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isAllowedItemInVector(::ItemDescriptor const&, std::vector<ItemDescriptor> const&);

    MCNAPI static bool isBannedItemInVector(::ItemDescriptor const&, std::vector<ItemDescriptor> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FullContainerName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual int
    getAllowedAddCount(::ContainerScreenContext const& screenContext, ::ItemStackBase const& itemInSlot) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;
#else // @header-generator platform
    MCFOLD bool $canItemMoveToContainer(::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD int $getContainerOffset(::ContainerScreenContext const& screenContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canItemMoveToContainer(::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerOffset(::ContainerScreenContext const&) const;
#else // @header-generator platform
    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const,
        ::ItemStackBase const& item,
        int const              amount,
        bool                   isInternalTransfer
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
#else // @header-generator platform
    MCAPI int
    $getAllowedAddCount(::ContainerScreenContext const& screenContext, ::ItemStackBase const& itemInSlot) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
