#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
class Player;
// clang-format on

class RangedWeaponItem : public ::Item {
public:
    // prevent constructor by default
    RangedWeaponItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RangedWeaponItem();

    virtual int getEnchantValue() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual void releaseUsing(::ItemStack&, ::Player*, int) const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RangedWeaponItem(std::string const&, short);

    MCNAPI float getLaunchPower(int, int, int) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, short);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getEnchantValue() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI void $releaseUsing(::ItemStack&, ::Player*, int) const;

    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
