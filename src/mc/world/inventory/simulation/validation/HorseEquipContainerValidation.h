#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemDescriptor;
#endif // @header-generator platform
class ItemStackBase;
// clang-format on

class HorseEquipContainerValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mArmorAllowedItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mSaddleAllowedItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mArmorAllowedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mSaddleAllowedItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HorseEquipContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~HorseEquipContainerValidation();
#else // @header-generator platform
    virtual int getAvailableSetCount(int slot, ::ItemStackBase const& item) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;
#else // @header-generator platform
    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAvailableSetCount(int, ::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const&,
        int const              slot,
        ::ItemStackBase const& item,
        int const              amount,
        bool
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    virtual int getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
    // clang-format on
#else // @header-generator platform
    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit HorseEquipContainerValidation(::ContainerScreenContext const&);
#else // @header-generator platform
    MCAPI explicit HorseEquipContainerValidation(::ContainerScreenContext const& screenContext);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ContainerScreenContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ContainerScreenContext const& screenContext);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;
#else // @header-generator platform
    MCFOLD int $getAvailableSetCount(int slot, ::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAvailableSetCount(int, ::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const&,
        int const              slot,
        ::ItemStackBase const& item,
        int const              amount,
        bool
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerSize(::ContainerScreenContext const&, ::Container const&) const;
#else // @header-generator platform
    MCAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
