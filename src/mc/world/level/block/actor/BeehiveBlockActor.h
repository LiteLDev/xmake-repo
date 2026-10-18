#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/actor/BlockActorType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mActorIdentifier;
        ::ll::TypedStorage<8, 32, ::CompoundTag>                mSaveData;
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActorIdentifier;
        ::ll::TypedStorage<8, 24, ::CompoundTag>                mSaveData;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, uint>                          mTicksLeftToStay;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Occupant& operator=(Occupant const&);
        Occupant(Occupant const&);
        Occupant();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BeehiveBlockActor::Occupant>> mOccupants;
    ::ll::TypedStorage<1, 1, bool>                                      mShouldSpawnBees;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BeehiveBlockActor::Occupant>> mOccupants;
    ::ll::TypedStorage<1, 1, bool>                                          mShouldSpawnBees;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BeehiveBlockActor();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BeehiveBlockActor();
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BeehiveBlockActor(::BlockPos const&);
#else // @header-generator platform
    MCAPI ::Actor* _revive(::BlockSource& region, ::BeehiveBlockActor::Occupant const& occupant, uchar spawnDirection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* _revive(::BlockSource&, ::BeehiveBlockActor::Occupant const&, uchar);
#else // @header-generator platform
    MCAPI bool _tickOccupant(::BlockSource& region, ::BeehiveBlockActor::Occupant& occupant);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tickOccupant(::BlockSource&, ::BeehiveBlockActor::Occupant&);
#else // @header-generator platform
    MCAPI void evictAll(::BlockSource& region, bool angry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void disableBeeSpawn();
#else // @header-generator platform
    MCAPI void saveUserData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool tryAdmit(::Actor& actor);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
