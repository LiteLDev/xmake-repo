#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Container;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Vec3;
// clang-format on

class ShearsItem : public ::Item {
public:
    // prevent constructor by default
    ShearsItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShearsItem();

    virtual bool canDestroySpecial(::Block const&) const;

    virtual int getEnchantSlot() const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual float getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShearsItem(std::string const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void onShearsUsed(
        ::BlockSource&,
        ::Level&,
        ::Actor*,
        ::ItemStack&,
        ::BlockPos const&,
        ::SharedTypes::Legacy::LevelSoundEvent const
    );
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
    MCNAPI bool $canDestroySpecial(::Block const&) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI float $getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
