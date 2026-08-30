#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
// clang-format on

class Inventory : public ::FillingContainer {
public:
    // prevent constructor by default
    Inventory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Inventory();

    virtual void init();

    virtual void setItem(int, ::ItemStack const&);

    virtual void setItemWithForceBalance(int, ::ItemStack const&, bool);

    virtual int getEmptySlotsCount() const;

    virtual bool add(::ItemStack&);

    virtual bool canAdd(::ItemStack const&) const;

    virtual int getFirstEmptySlot() const;

    virtual void setContainerSize(int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Inventory(::Player*);

    MCNAPI void clearInventoryWithDefault(bool);

    MCNAPI void dropSlot(int, bool, bool, bool);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI void $setItemWithForceBalance(int, ::ItemStack const&, bool);

    MCNAPI int $getEmptySlotsCount() const;

    MCNAPI bool $add(::ItemStack&);

    MCNAPI bool $canAdd(::ItemStack const&) const;

    MCNAPI int $getFirstEmptySlot() const;

    MCNAPI void $setContainerSize(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
