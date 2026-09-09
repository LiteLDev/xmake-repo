#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class IVanillaRenderBlockActorComponent;
class SaveContext;
// clang-format on

class BedBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>             mDyeColor;
    ::ll::TypedStorage<1, 1, bool>            mDirty;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPetSleepingOnBed;
    ::ll::TypedStorage<8, 8, ::Block const&>  mBedBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    BedBlockActor& operator=(BedBlockActor const&);
    BedBlockActor(BedBlockActor const&);
    BedBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BedBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual bool saveItemInstanceData(::CompoundTag&) const;

    virtual void onPlace(::BlockSource&);

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual ::IVanillaRenderBlockActorComponent* getCrackEntity(::BlockSource&, ::BlockPos const&);

    virtual void tick(::BlockSource&);

    virtual std::string getName() const;

    virtual void onChanged(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BedBlockActor(::BlockPos const&);

    MCNAPI bool claimPetSleepOnBed(::ActorUniqueID);

    MCNAPI int getColorIndex() const;

    MCNAPI void setColorIndex(int);

    MCNAPI void startSleepingOn();

    MCNAPI void stopSleepingOn(::BlockSource&, bool);
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

    MCNAPI bool $saveItemInstanceData(::CompoundTag&) const;

    MCNAPI void $onPlace(::BlockSource&);

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI ::IVanillaRenderBlockActorComponent* $getCrackEntity(::BlockSource&, ::BlockPos const&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI std::string $getName() const;

    MCNAPI void $onChanged(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
