#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Level;
class SaveContext;
// clang-format on

class CreakingHeartBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>            mCooldown;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mSpawnedCreakingID;
    ::ll::TypedStorage<4, 4, uint>            mTrailResidualDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    CreakingHeartBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreakingHeartBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual bool saveItemInstanceData(::CompoundTag&) const;

    virtual void onRemoved(::BlockSource&);

    virtual void tick(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CreakingHeartBlockActor(::BlockPos const&);

    MCNAPI void despawnSpawnedCreaking(::Level&);

    MCNAPI void executeEvent(::BlockSource&, ::BlockPos const&, ::Block const&, std::string const&, ::Actor&);

    MCNAPI int getComparatorSignal(::Level&) const;

    MCNAPI void onSpawnedCreakingDamaged(::BlockSource&, ::Actor&);
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

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $tick(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
