#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/SpawnData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class Mob;
// clang-format on

class BaseMobSpawner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mSpawnDelay;
    ::ll::TypedStorage<4, 4, float>                         mSpin;
    ::ll::TypedStorage<4, 4, float>                         mOSpin;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mActorDefId;
    ::ll::TypedStorage<8, 24, std::vector<SpawnData>>       mSpawnPotentials;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SpawnData>>    mNextSpawnData;
    ::ll::TypedStorage<4, 4, int>                           mMinSpawnDelay;
    ::ll::TypedStorage<4, 4, int>                           mMaxSpawnDelay;
    ::ll::UntypedStorage<4, 8>                              mSpawnCount;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>              mDisplayEntity;
    ::ll::TypedStorage<4, 4, int>                           mMaxNearbyEntities;
    ::ll::TypedStorage<4, 4, int>                           mRequiredPlayerRange;
    ::ll::TypedStorage<4, 4, int>                           mSpawnRange;
    ::ll::TypedStorage<1, 1, bool>                          mActive;
    ::ll::TypedStorage<4, 4, float>                         mDisplayEntityWidth;
    ::ll::TypedStorage<4, 4, float>                         mDisplayEntityHeight;
    ::ll::TypedStorage<4, 4, float>                         mDisplayEntityScale;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseMobSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseMobSpawner();

    virtual void tick(::BlockSource&);

    virtual void load(::CompoundTag const&);

    virtual void save(::CompoundTag&);

    virtual ::BlockPos const& getPos() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BaseMobSpawner(::ActorDefinitionIdentifier);

    MCNAPI void _delay(::BlockSource&);

    MCNAPI float getOSpin() const;

    MCNAPI float getSpin() const;

    MCNAPI void removeDisplayEntity();

    MCNAPI void setEntityId(::ActorDefinitionIdentifier);

    MCNAPI ::Mob* tryGetOrCreateDisplayEntity(::BlockSource&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionIdentifier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::BlockSource&);

    MCNAPI void $load(::CompoundTag const&);

    MCNAPI void $save(::CompoundTag&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
