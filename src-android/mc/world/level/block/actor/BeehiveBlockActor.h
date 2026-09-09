#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class BeehiveBlockActor : public ::VanillaBlockActor {
public:
    // BeehiveBlockActor inner types declare
    // clang-format off
    struct Occupant;
    // clang-format on

    // BeehiveBlockActor inner types define
    struct Occupant {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mActorIdentifier;
        ::ll::TypedStorage<8, 32, ::CompoundTag>                mSaveData;
        ::ll::TypedStorage<4, 4, uint>                          mTicksLeftToStay;
        // NOLINTEND

    public:
        // prevent constructor by default
        Occupant& operator=(Occupant const&);
        Occupant(Occupant const&);
        Occupant();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BeehiveBlockActor::Occupant>> mOccupants;
    ::ll::TypedStorage<1, 1, bool>                                      mShouldSpawnBees;
    // NOLINTEND

public:
    // prevent constructor by default
    BeehiveBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeehiveBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void tick(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BeehiveBlockActor(::BlockPos const&);

    MCNAPI ::Actor* _revive(::BlockSource&, ::BeehiveBlockActor::Occupant const&, uchar);

    MCNAPI bool _tickOccupant(::BlockSource&, ::BeehiveBlockActor::Occupant&);

    MCNAPI void disableBeeSpawn();

    MCNAPI void evictAll(::BlockSource&, bool);

    MCNAPI void saveUserData(::CompoundTag&) const;

    MCNAPI bool tryAdmit(::Actor&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& MAX_OCCUPANCY();

    MCNAPI static ::BlockActorType const& TypeId();
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

    MCNAPI void $tick(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
