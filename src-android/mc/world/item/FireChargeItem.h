#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Container;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Vec3;
// clang-format on

class FireChargeItem : public ::Item {
public:
    // prevent constructor by default
    FireChargeItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FireChargeItem();

    virtual bool isDestructive(int) const;

    virtual ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FireChargeItem(std::string const&, int);

    MCNAPI bool _tryLightCandle(::Actor&, ::BlockPos const) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& LEVEL_SOUND_EVENT_VOLUME();
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
    MCNAPI bool $isDestructive(int) const;

    MCNAPI ::Actor* $createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
