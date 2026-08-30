#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/world/Container.h"
#include "mc/world/item/ClockSpriteCalculator.h"
#include "mc/world/item/CompassSpriteCalculator.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class ShelfBlockActor : public ::VanillaBlockActor, public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::ClockSpriteCalculator>   mClockSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mCompassSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mRecoveryCompassSpriteCalc;
    ::ll::TypedStorage<1, 1, bool>                       mUpdateCalculators;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>    mItems;
    ::ll::UntypedStorage<1, 8>                           mIgnoreLighting;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>           mDisplayEntity;
    ::ll::TypedStorage<1, 1, bool>                       mEmitSingleItemSwapVibration;
    // NOLINTEND

public:
    // prevent constructor by default
    ShelfBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShelfBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onRemoved(::BlockSource&);

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);

    virtual ::Container const* getContainer() const;

    virtual ::Container* getContainer();

    virtual std::string getName() const;

    virtual void onChanged(::BlockSource&);

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual int getMaxStackSize() const;

    virtual int getContainerSize() const;

    virtual void startOpen(::Actor&);

    virtual void stopOpen(::Actor&);

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ShelfBlockActor(::BlockPos const&);

    MCNAPI void _setItemInternal(int, ::ItemStack const&, bool, bool);

    MCNAPI ::ClockSpriteCalculator& getClockCalculator();

    MCNAPI ::CompassSpriteCalculator& getCompassCalculator();

    MCNAPI ::brstd::bitset<3, uchar> getOccupiedSlots();

    MCNAPI ::CompassSpriteCalculator& getRecoveryCompassCalculator();

    MCNAPI bool isSlotOccupied(int) const;

    MCNAPI void setItemWithoutVibrations(int, ::ItemStack const&);

    MCNAPI ::Actor* tryGetOrCreateDisplayEntity(::BlockSource&);

    MCNAPI void updateItemCalculators(::ItemStack const&, ::BlockSource const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::Container* $getContainer();

    MCNAPI std::string $getName() const;

    MCNAPI void $onChanged(::BlockSource&);

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI int $getMaxStackSize() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
