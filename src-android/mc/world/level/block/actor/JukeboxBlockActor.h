#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class DataLoadHelper;
class ILevel;
class Level;
class SaveContext;
struct SoundEventIdentifier;
// clang-format on

class JukeboxBlockActor : public ::RandomizableBlockActorContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mRecord;
    ::ll::TypedStorage<4, 4, int>           mCount;
    ::ll::TypedStorage<1, 1, bool>          mRecordingFinished;
    ::ll::TypedStorage<4, 4, int>           mTicksPlaying;
    ::ll::TypedStorage<1, 1, bool>          mPostBlockChangeGameEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    JukeboxBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JukeboxBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);

    virtual ::Container const* getContainer() const;

    virtual ::Container* getContainer();

    virtual void onChanged(::BlockSource&);

    virtual void startOpen(::Actor&);

    virtual int getContainerSize() const;

    virtual int getMaxStackSize() const;

    virtual bool canPushInItem(int, int, ::ItemStack const&) const;

    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual void stopOpen(::Actor&);

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JukeboxBlockActor(::BlockPos const&);

    MCNAPI void ejectRecord(::BlockSource&);

    MCNAPI ::ItemStack const& getRecord() const;

    MCNAPI bool hasRecord() const;

    MCNAPI bool isRecordPlaying() const;

    MCNAPI void setRecord(::ItemStack const&, bool);

    MCNAPI void startPlayingRecord(::BlockSource&);

    MCNAPI void stopPlayingRecord(::BlockSource&);
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

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::Container* $getContainer();

    MCNAPI void $onChanged(::BlockSource&);

    MCNAPI void $startOpen(::Actor&);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
