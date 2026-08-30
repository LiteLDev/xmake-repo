#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/Rarity.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Container;
class HashedString;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Vec3;
struct ResolvedItemIconInfo;
// clang-format on

class SkullItem : public ::BlockItem {
public:
    // prevent constructor by default
    SkullItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkullItem();

    virtual ::BlockShape getBlockShape() const;

    virtual int getLevelDataForAuxValue(int) const;

    virtual ::Rarity getRarity(::ItemStackBase const&) const;

    virtual int getEnchantSlot() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkullItem(std::string const&, int, ::HashedString const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockShape $getBlockShape() const;

    MCNAPI int $getLevelDataForAuxValue(int) const;

    MCNAPI ::Rarity $getRarity(::ItemStackBase const&) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
