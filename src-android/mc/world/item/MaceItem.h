#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/WeaponItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class ItemStack;
class ItemStackBase;
class Mob;
struct ItemTier;
// clang-format on

class MaceItem : public ::WeaponItem {
public:
    // prevent constructor by default
    MaceItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MaceItem();

    virtual bool canDestroySpecial(::Block const&) const;

    virtual float getAttackDamageBonus(::Actor const&) const;

    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    virtual int getEnchantSlot() const;

    virtual float getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MaceItem(std::string const&, int, ::ItemTier const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::ItemTier const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canDestroySpecial(::Block const&) const;

    MCNAPI float $getAttackDamageBonus(::Actor const&) const;

    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI float $getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
