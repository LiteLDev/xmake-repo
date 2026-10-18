#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~ContainerValidationBase() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidSlotForContainer(::ContainerScreenContext const&, ::Container const&, int const) const;
#else // @header-generator platform
    virtual bool isValidSlotForContainer(
        ::ContainerScreenContext const& screenContext,
        ::Container const&              container,
        int const                       slot
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;
#else // @header-generator platform
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAvailableSetCount(int const, ::ItemStackBase const&) const;
#else // @header-generator platform
    virtual int getAvailableSetCount(int const slot, ::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    virtual int
    getAllowedAddCount(::ContainerScreenContext const& screenContext, ::ItemStackBase const& itemInSlot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isItemAllowedToRemove(::ContainerScreenContext const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool
    isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canItemMoveToContainer(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canDestroy(::ContainerScreenContext const&) const;
#else // @header-generator platform
    virtual bool canDestroy(::ContainerScreenContext const& screenContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getContainerOffset(::ContainerScreenContext const&) const;
#else // @header-generator platform
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // clang-format on
#else // @header-generator platform
    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidSlotForContainer(::ContainerScreenContext const&, ::Container const&, int const) const;
#else // @header-generator platform
    MCAPI bool $isValidSlotForContainer(
        ::ContainerScreenContext const& screenContext,
        ::Container const&              container,
        int const                       slot
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;
#else // @header-generator platform
    MCFOLD bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAvailableSetCount(int const, ::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI int $getAvailableSetCount(int const slot, ::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI int
    $getAllowedAddCount(::ContainerScreenContext const& screenContext, ::ItemStackBase const& itemInSlot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isItemAllowedToRemove(::ContainerScreenContext const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD bool
    $isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canItemMoveToContainer(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI bool $canItemMoveToContainer(::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canDestroy(::ContainerScreenContext const&) const;
#else // @header-generator platform
    MCAPI bool $canDestroy(::ContainerScreenContext const& screenContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerOffset(::ContainerScreenContext const&) const;
#else // @header-generator platform
    MCFOLD int $getContainerOffset(::ContainerScreenContext const& screenContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
#else // @header-generator platform
    MCFOLD int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;


#endif // @header-generator platform
    // NOLINTEND
};
