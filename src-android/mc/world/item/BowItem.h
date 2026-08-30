#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/RangedWeaponItem.h"
#include "mc/world/item/ResolvedItemIconInfo.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Item;
class ItemStackBase;
// clang-format on

class BowItem : public ::RangedWeaponItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::ResolvedItemIconInfo[3]> mFrame;
    // NOLINTEND

public:
    // prevent constructor by default
    BowItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BowItem();

    virtual int getEnchantSlot() const;

    virtual void enchantProjectile(::ItemStackBase const&, ::Actor&) const;

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BowItem(std::string const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getEnchantSlot() const;

    MCNAPI void $enchantProjectile(::ItemStackBase const&, ::Actor&) const;

    MCNAPI ::Item& $setIconInfo(std::string const&, int);

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
