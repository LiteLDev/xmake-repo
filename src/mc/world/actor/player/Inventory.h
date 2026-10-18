#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class Inventory : public ::FillingContainer {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    Inventory();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Inventory();
#else // @header-generator platform
    virtual ~Inventory() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init();
#else // @header-generator platform
    virtual void init() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItem(int, ::ItemStack const&);
#else // @header-generator platform
    virtual bool add(::ItemStack& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItemWithForceBalance(int, ::ItemStack const&, bool);

    virtual int getEmptySlotsCount() const;

    virtual bool add(::ItemStack&);

    virtual bool canAdd(::ItemStack const&) const;
#else // @header-generator platform
    virtual bool canAdd(::ItemStack const& item) const /*override*/;
#endif // @header-generator platform

    virtual int getFirstEmptySlot() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setContainerSize(int);
#else // @header-generator platform
    virtual int getEmptySlotsCount() const /*override*/;

    virtual void setContainerSize(int size);

    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Inventory(::Player*);
#else // @header-generator platform
    MCAPI void dropSlot(int slot, bool onlyClearContainer, bool dropAll, bool randomly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearInventoryWithDefault(bool);
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack> getComplexItems();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void dropSlot(int, bool, bool, bool);
#else // @header-generator platform
    MCAPI void setupDefault();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemStack> getComplexItems();

    MCNAPI void setupDefault();

    MCNAPI void tick(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void tick(int selectedSlot);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $init();
#else // @header-generator platform
    MCAPI void $init();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItem(int, ::ItemStack const&);
#else // @header-generator platform
    MCAPI bool $add(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItemWithForceBalance(int, ::ItemStack const&, bool);
#else // @header-generator platform
    MCAPI bool $canAdd(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEmptySlotsCount() const;
#else // @header-generator platform
    MCAPI int $getFirstEmptySlot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $add(::ItemStack&);
#else // @header-generator platform
    MCFOLD int $getEmptySlotsCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canAdd(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI void $setContainerSize(int size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getFirstEmptySlot() const;
#else // @header-generator platform
    MCFOLD void $setItem(int slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setContainerSize(int);
#else // @header-generator platform
    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
