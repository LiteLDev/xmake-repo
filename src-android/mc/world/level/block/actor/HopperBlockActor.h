#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/Container.h"
#include "mc/world/actor/Hopper.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class FurnaceBlockActor;
class ILevel;
class SaveContext;
class Vec3;
// clang-format on

class HopperBlockActor : public ::VanillaBlockActor, public ::Container, public ::Hopper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 0>       mItems;
    ::ll::TypedStorage<8, 8, ::Tick> mLastTick;
    // NOLINTEND

public:
    // prevent constructor by default
    HopperBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HopperBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onMove();

    virtual void onRemoved(::BlockSource&);

    virtual void onNeighborChanged(::BlockSource&, ::BlockPos const&);

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);

    virtual ::Container const* getContainer() const;

    virtual ::Container* getContainer();

    virtual std::string getName() const;

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual int getContainerSize() const;

    virtual int getMaxStackSize() const;

    virtual void startOpen(::Actor&);

    virtual void stopOpen(::Actor&);

    virtual void setContainerChanged(int);

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HopperBlockActor(::BlockPos const&);

    MCNAPI int _countItems() const;

    MCNAPI void _tick(::BlockSource&, int);

    MCNAPI void checkForSmeltEverythingAchievement(::BlockSource&);

    MCNAPI ::FurnaceBlockActor* getAttachedFurnace(::BlockSource&);

    MCNAPI bool isAttachedToChestAndFurnace(::BlockSource&);

    MCNAPI bool isAttachedToContainerType(::BlockSource&, ::SharedTypes::Legacy::ContainerType);

    MCNAPI void updateCooldownAfterMove(::Tick const&, int);

    MCNAPI void updateMoveCooldownAfterMove(::Tick const&, int);
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

    MCNAPI void $onMove();

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $onNeighborChanged(::BlockSource&, ::BlockPos const&);

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::Container* $getContainer();

    MCNAPI std::string $getName() const;

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI void $setContainerChanged(int);

    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
