#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class TridentItem : public ::Item {
public:
    // prevent constructor by default
    TridentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TridentItem();

    virtual bool isThrowable() const;

    virtual short getMaxDamage() const;

    virtual int getAttackDamage() const;

    virtual bool canDestroyInCreative() const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual void releaseUsing(::ItemStack&, ::Player*, int) const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Actor* _setupProjectile(::Actor*, ::ItemStack, bool) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& CHARGE_THRESHOLD_TIME();

    MCNAPI static int const& THROW_THRESHOLD_TIME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isThrowable() const;

    MCNAPI short $getMaxDamage() const;

    MCNAPI int $getAttackDamage() const;

    MCNAPI bool $canDestroyInCreative() const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI int $getEnchantValue() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI void $releaseUsing(::ItemStack&, ::Player*, int) const;

    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
