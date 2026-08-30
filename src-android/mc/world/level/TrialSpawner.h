#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/registry/TrialSpawnerConfig.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class CompoundTag;
class Level;
class Mob;
class Random;
class SpawnData;
class Tag;
class TrialSpawnerBlockActor;
class TrialSpawnerConfigRegistry;
class Vec3;
struct DimensionType;
// clang-format on

class TrialSpawner {
public:
    // TrialSpawner inner types declare
    // clang-format off
    struct WeightedItemStack;
    struct Data;
    struct PlayerScanResult;
    // clang-format on

    // TrialSpawner inner types define
    enum class SpawningLogicState : int {
        Inactive                 = 0,
        WaitingForPlayers        = 1,
        Active                   = 2,
        WaitingForRewardEjection = 3,
        EjectingRewards          = 4,
        Cooldown                 = 5,
        _Count                   = 6,
    };

    struct WeightedItemStack {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack> itemStack;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedItemStack& operator=(WeightedItemStack const&);
        WeightedItemStack();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WeightedItemStack();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>>                   mDetectedPlayers;
        ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>>                   mCurrentMobs;
        ::ll::TypedStorage<8, 8, ulong>                                         mCooldownEndsAt;
        ::ll::TypedStorage<8, 8, ulong>                                         mNextMobSpawnsAt;
        ::ll::TypedStorage<4, 4, int>                                           mTotalMobsSpawned;
        ::ll::TypedStorage<8, 8, std::unique_ptr<SpawnData>>                    mNextSpawnData;
        ::ll::TypedStorage<8, 24, std::string>                                  mSelectedLootTableName;
        ::ll::TypedStorage<8, 24, std::vector<TrialSpawner::WeightedItemStack>> mDispensing;
        ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>                 mActorDefId;
        ::ll::TypedStorage<1, 24, ::WeakEntityRef>                              mDisplayEntity;
        ::ll::TypedStorage<4, 4, float>                                         mCurrentSpinSpeed;
        ::ll::TypedStorage<4, 4, float>                                         mPreviousSpinSpeed;
        ::ll::TypedStorage<1, 1, bool>                                          mSkipNextMobCleanup;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Data();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PlayerScanResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                        haveTrialOmen;
        ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>> foundPlayers;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const>      mPosition;
    ::ll::TypedStorage<4, 4, int>                    mPlayerSearchRange;
    ::ll::TypedStorage<8, 304, ::TrialSpawner::Data> mData;
    ::ll::TypedStorage<8, 128, ::TrialSpawnerConfig> mNormalConfig;
    ::ll::TypedStorage<8, 128, ::TrialSpawnerConfig> mOminousConfig;
    ::ll::TypedStorage<1, 1, bool>                   mIsOminous;
    ::ll::TypedStorage<1, 1, bool>                   hasSpawnedItemSpawner;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialSpawner();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TrialSpawner(::BlockPos const&);

    MCNAPI void _dispenseItemAboveRandomCombatant(::BlockSource&);

    MCNAPI void _ejectReward(::BlockSource&, ::BlockPos) const;

    MCNAPI std::vector<TrialSpawner::WeightedItemStack>& _getDispensingItems(::BlockSource&);

    MCNAPI std::optional<Vec3> _getPositionToSpawnItemSpawner(::BlockSource&, std::vector<ActorUniqueID> const&) const;

    MCNAPI bool _hasLineOfSight(::BlockSource const&, ::Vec3 const, ::Vec3 const, float const) const;

    MCNAPI void _sendSmallFlame(::BlockSource&, ::Vec3 const);

    MCNAPI void _setUpdated(::BlockSource&);

    MCNAPI void _spawnItemSpawner(::BlockSource&, ::Vec3, ::ItemStack const&);

    MCNAPI std::optional<ActorUniqueID> _spawnMob(::BlockSource&, ::BlockPos);

    MCNAPI void _tryRegisterNewPlayers(::BlockSource&, ::TrialSpawner::SpawningLogicState);

    MCNAPI void applyUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI ::Mob* createAndAddDisplayEntity(::BlockSource&);

    MCNAPI ::CompoundTag createUpdatePacket();

    MCNAPI float getCurrentSpinSpeed() const;

    MCNAPI ::SpawnData const* getOrCreateNextSpawnData(::Random&);

    MCNAPI float getPreviousSpinSpeed() const;

    MCNAPI void load(::CompoundTag const&, ::TrialSpawnerConfigRegistry const&);

    MCNAPI void removeDisplayEntity();

    MCNAPI void save(::CompoundTag&);

    MCNAPI void setEntityId(::ActorDefinitionIdentifier const&, ::BlockSource&);

    MCNAPI void tick(::BlockSource&);

    MCNAPI ::Mob* tryGetOrCreateDisplayEntity(::BlockSource&);

    MCNAPI ~TrialSpawner();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<ItemStack>
    _getRandomLootTableItems(::Level&, ::Random&, ::DimensionType, std::string const&);

    MCNAPI static std::unique_ptr<Tag> _saveConfig(::TrialSpawnerConfig&);

    MCNAPI static void addSpawnParticles(::Level&, ::Vec3 const, bool);

    MCNAPI static void sendEjectItemParticles(::Level&, ::BlockPos const, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DELAY_BETWEEN_ITEM_DISPENSING();

    MCNAPI static int const& SPAWN_ITEM_DELAY_MAX();

    MCNAPI static int const& SPAWN_ITEM_DELAY_MIN();
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
};
