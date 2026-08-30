#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
struct ItemTier;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class WeaponItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>               mDamage;
    ::ll::TypedStorage<8, 8, ::ItemTier const&> mTier;
    // NOLINTEND

public:
    // prevent constructor by default
    WeaponItem& operator=(WeaponItem const&);
    WeaponItem(WeaponItem const&);
    WeaponItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WeaponItem();

    virtual bool canDestroySpecial(::Block const&) const;

    virtual int getAttackDamage() const;

    virtual bool isHandEquipped() const;

    virtual bool canDestroyInCreative() const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual float getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeaponItem(std::string const&, int, ::ItemTier const&);

    MCNAPI void setAttackDamage(int);
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

    MCNAPI int $getAttackDamage() const;

    MCNAPI bool $isHandEquipped() const;

    MCNAPI bool $canDestroyInCreative() const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI int $getEnchantValue() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI float $getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
