#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/comprehensive/ParticleType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/WeakEntityRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/registry/TrialSpawnerConfig.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class CompoundTag;
class Level;
class Mob;
class Random;
class SpawnData;
#if defined(LL_PLAT_A) // @header-generator platform
class Tag;
class TrialSpawnerBlockActor;
#else // @header-generator platform
#endif // @header-generator platform
class TrialSpawnerConfigRegistry;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorUniqueID;
#endif // @header-generator platform
struct DimensionType;
// clang-format on

class TrialSpawner {
public:
    // TrialSpawner inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PlayerScanResult;
#endif // @header-generator platform
    struct WeightedItemStack;
    struct Data;
#if defined(LL_PLAT_A) // @header-generator platform
    struct PlayerScanResult;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // TrialSpawner inner types define
    enum class SpawningLogicState : int {
        Inactive                 = 0,
        WaitingForPlayers        = 1,
        Active                   = 2,
        WaitingForRewardEjection = 3,
        EjectingRewards          = 4,
        Cooldown                 = 5,
#if defined(LL_PLAT_A) // @header-generator platform
        _Count                   = 6,
#else // @header-generator platform
        Count                    = 6,
    };

    struct PlayerScanResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                            haveTrialOmen;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> foundPlayers;
        // NOLINTEND
#endif // @header-generator platform
    };

    struct WeightedItemStack {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack> itemStack;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                   mDetectedPlayers;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                   mCurrentMobs;
        ::ll::TypedStorage<8, 8, uint64>                                            mCooldownEndsAt;
        ::ll::TypedStorage<8, 8, uint64>                                            mNextMobSpawnsAt;
        ::ll::TypedStorage<4, 4, int>                                               mTotalMobsSpawned;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpawnData>>                    mNextSpawnData;
        ::ll::TypedStorage<8, 32, ::std::string>                                    mSelectedLootTableName;
        ::ll::TypedStorage<8, 24, ::std::vector<::TrialSpawner::WeightedItemStack>> mDispensing;
        ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>                     mActorDefId;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef>                                  mDisplayEntity;
        ::ll::TypedStorage<4, 4, float>                                             mCurrentSpinSpeed;
        ::ll::TypedStorage<4, 4, float>                                             mPreviousSpinSpeed;
        ::ll::TypedStorage<1, 1, bool>                                              mSkipNextMobCleanup;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~Data();
#else // @header-generator platform
        MCAPI ~Data();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PlayerScanResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                        haveTrialOmen;
        ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>> foundPlayers;
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const>      mPosition;
    ::ll::TypedStorage<4, 4, int>                    mPlayerSearchRange;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 304, ::TrialSpawner::Data> mData;
    ::ll::TypedStorage<8, 128, ::TrialSpawnerConfig> mNormalConfig;
    ::ll::TypedStorage<8, 128, ::TrialSpawnerConfig> mOminousConfig;
#else // @header-generator platform
    ::ll::TypedStorage<8, 352, ::TrialSpawner::Data> mData;
    ::ll::TypedStorage<8, 144, ::TrialSpawnerConfig> mNormalConfig;
    ::ll::TypedStorage<8, 144, ::TrialSpawnerConfig> mOminousConfig;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                   mIsOminous;
    ::ll::TypedStorage<1, 1, bool>                   hasSpawnedItemSpawner;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    TrialSpawner();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit TrialSpawner(::BlockPos const&);
#else // @header-generator platform
    MCAPI ::std::vector<::TrialSpawner::WeightedItemStack>& _getDispensingItems(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _dispenseItemAboveRandomCombatant(::BlockSource&);
#else // @header-generator platform
    MCAPI ::std::optional<::Vec3>
    _getPositionToSpawnItemSpawner(::BlockSource& region, ::std::vector<::ActorUniqueID> const& eligibleActorIds) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _ejectReward(::BlockSource&, ::BlockPos) const;
#else // @header-generator platform
    MCAPI bool
    _hasLineOfSight(::BlockSource const& region, ::Vec3 const from, ::Vec3 const to, float const maxRange) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<TrialSpawner::WeightedItemStack>& _getDispensingItems(::BlockSource&);
#else // @header-generator platform
    MCAPI void _sendSmallFlame(::BlockSource& region, ::Vec3 const center);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Vec3> _getPositionToSpawnItemSpawner(::BlockSource&, std::vector<ActorUniqueID> const&) const;
#else // @header-generator platform
    MCAPI void _setUpdated(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _hasLineOfSight(::BlockSource const&, ::Vec3 const, ::Vec3 const, float const) const;
#else // @header-generator platform
    MCAPI void _spawnItemSpawner(::BlockSource& region, ::Vec3 pos, ::ItemStack const& itemToSpawn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendSmallFlame(::BlockSource&, ::Vec3 const);
#else // @header-generator platform
    MCAPI ::std::optional<::ActorUniqueID> _spawnMob(::BlockSource& region, ::BlockPos blockActorPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setUpdated(::BlockSource&);
#else // @header-generator platform
    MCAPI void _tryRegisterNewPlayers(::BlockSource& region, ::TrialSpawner::SpawningLogicState currentState);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _spawnItemSpawner(::BlockSource&, ::Vec3, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void applyUpdatePacket(::CompoundTag const& tag, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ActorUniqueID> _spawnMob(::BlockSource&, ::BlockPos);
#else // @header-generator platform
    MCAPI ::Mob* createAndAddDisplayEntity(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryRegisterNewPlayers(::BlockSource&, ::TrialSpawner::SpawningLogicState);
#else // @header-generator platform
    MCAPI ::CompoundTag createUpdatePacket();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI ::SpawnData const* getOrCreateNextSpawnData(::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Mob* createAndAddDisplayEntity(::BlockSource&);
#else // @header-generator platform
    MCAPI ::TrialSpawner::SpawningLogicState getSpawningLogicState(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag createUpdatePacket();
#else // @header-generator platform
    MCAPI void load(::CompoundTag const& data, ::TrialSpawnerConfigRegistry const& configRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getCurrentSpinSpeed() const;
#else // @header-generator platform
    MCAPI void removeDisplayEntity();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SpawnData const* getOrCreateNextSpawnData(::Random&);
#else // @header-generator platform
    MCAPI void save(::CompoundTag& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getPreviousSpinSpeed() const;
#else // @header-generator platform
    MCAPI void setEntityId(::ActorDefinitionIdentifier const& actorDefId, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void load(::CompoundTag const&, ::TrialSpawnerConfigRegistry const&);
#else // @header-generator platform
    MCAPI void tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeDisplayEntity();

    MCNAPI void save(::CompoundTag&);

    MCNAPI void setEntityId(::ActorDefinitionIdentifier const&, ::BlockSource&);

    MCNAPI void tick(::BlockSource&);

    MCNAPI ::Mob* tryGetOrCreateDisplayEntity(::BlockSource&);

    MCNAPI ~TrialSpawner();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Mob* tryGetOrCreateDisplayEntity(::BlockSource& region);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<ItemStack>
    _getRandomLootTableItems(::Level&, ::Random&, ::DimensionType, std::string const&);
#else // @header-generator platform
    MCAPI static ::std::vector<::ItemStack> _getRandomLootTableItems(
        ::Level&             level,
        ::Random&            random,
        ::DimensionType      dimensionType,
        ::std::string const& lootTableName
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void addSpawnParticles(::Level& level, ::Vec3 pos, bool isOminous);

    MCAPI static void sendEjectItemParticles(::Level& level, ::BlockPos pos, bool isOminous);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
