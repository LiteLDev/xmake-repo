#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
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

class BellBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mRinging;
    ::ll::UntypedStorage<1, 1>     mMovementDirection;
    ::ll::TypedStorage<1, 1, bool> mPowered;
    ::ll::TypedStorage<4, 4, int>  mAlarmCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    BellBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BellBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BellBlockActor(::BlockPos const&);

    MCNAPI void ejectItem(::BlockPos const&, ::Actor&) const;

    MCNAPI bool isRinging() const;

    MCNAPI bool ring(::Direction::Type, ::BlockSource&, ::Actor*, bool);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
