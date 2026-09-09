#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/RangedWeaponItem.h"
#include "mc/world/item/ResolvedItemIconInfo.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Item;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
class Vec3;
// clang-format on

class CrossbowItem : public ::RangedWeaponItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 280, ::ResolvedItemIconInfo[5]> mFrame;
    ::ll::TypedStorage<4, 4, int const>                   mMaxDurability;
    ::ll::TypedStorage<4, 4, int const>                   mMaxMultiShots;
    ::ll::TypedStorage<4, 4, float const>                 mMultishotAngleDelta;
    ::ll::TypedStorage<4, 4, float const>                 mDefaultArrowPower;
    // NOLINTEND

public:
    // prevent constructor by default
    CrossbowItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrossbowItem();

    virtual int getMaxUseDuration(::ItemStack const*) const;

    virtual int getEnchantSlot() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    virtual void releaseUsing(::ItemStack&, ::Player*, int) const;

    virtual void enchantProjectile(::ItemStackBase const&, ::Actor&) const;

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    virtual bool canBeCharged() const;

    virtual void playSoundIncrementally(::ItemStack const&, ::Mob&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CrossbowItem(std::string const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_USE_DURATION();
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
    MCNAPI int $getMaxUseDuration(::ItemStack const*) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    MCNAPI void $releaseUsing(::ItemStack&, ::Player*, int) const;

    MCNAPI void $enchantProjectile(::ItemStackBase const&, ::Actor&) const;

    MCNAPI ::Item& $setIconInfo(std::string const&, int);

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    MCNAPI bool $canBeCharged() const;

    MCNAPI void $playSoundIncrementally(::ItemStack const&, ::Mob&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
