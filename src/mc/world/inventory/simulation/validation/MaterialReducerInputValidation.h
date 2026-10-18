#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/CraftableCompounds.h"
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class BlockReducer;
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class MaterialReducerInputValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockReducer*>        mBlockReducer;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::CraftableCompounds> mCraftableCompounds;
#else // @header-generator platform
    ::ll::TypedStorage<8, 264, ::CraftableCompounds> mCraftableCompounds;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MaterialReducerInputValidation();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MaterialReducerInputValidation();
#else // @header-generator platform
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;
#else // @header-generator platform
    virtual int getAvailableSetCount(int slot, ::ItemStackBase const& item) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAvailableSetCount(int, ::ItemStackBase const&) const;
#else // @header-generator platform
    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canDestroy(::ContainerScreenContext const&) const;

    virtual int getContainerOffset(::ContainerScreenContext const&) const;
    // clang-format on
#else // @header-generator platform
    virtual bool canDestroy(::ContainerScreenContext const& screenContext) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MaterialReducerInputValidation(::ContainerScreenContext const&);

    MCNAPI bool isItemAllowed(::ItemStackBase const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerScreenContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool isItemAllowed(::ItemStackBase const& item) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const;
#else // @header-generator platform
    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAvailableSetCount(int, ::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD int $getAvailableSetCount(int slot, ::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canDestroy(::ContainerScreenContext const&) const;
#else // @header-generator platform
    MCFOLD int $getContainerOffset(::ContainerScreenContext const& screenContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerOffset(::ContainerScreenContext const&) const;
#else // @header-generator platform
    MCFOLD bool $canDestroy(::ContainerScreenContext const& screenContext) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
