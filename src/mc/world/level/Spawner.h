#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/SpawnBlockRequirements.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/chunk/LevelChunk.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class ActorSpawnRuleGroup;
class Biome;
class BlockPos;
class BlockSource;
class ChunkPos;
#if defined(LL_PLAT_A) // @header-generator platform
class Experiments;
class IMinecraftEventing;
#else // @header-generator platform
#endif // @header-generator platform
class IRandom;
class IWorldRegistriesProvider;
class ItemActor;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
class LevelChunk;
#endif // @header-generator platform
class LevelChunkVolumeData;
class Mob;
class MobSpawnRules;
class Random;
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SpawnConditions;
#endif // @header-generator platform
class SpawnGroupRegistry;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct SpawnSettings;
namespace br::spawn { class EntityTypeCache; }
namespace br::spawn { class SpawnPlacements; }
namespace br::spawn { struct State; }
// clang-format on

class Spawner {
public:
    // Spawner inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using MobSpawnedCallback = std::function<void(Mob&)>;
#else // @header-generator platform
    using AncientCityPredicate = ::std::function<bool(::BlockSource const&, ::BlockPos)>;

    using GetSpawningAreasCallback =
        ::std::function<::gsl::span<::LevelChunk::SpawningArea const>(::LevelChunk const&)>;

    using MobSpawnedCallback = ::std::function<void(::Mob&)>;

    using SpawnMobClusterCallback = ::std::function<void(::BlockPos const&, ::SpawnConditions&)>;

    using SpawnStructureMobCallback =
        ::std::function<void(::BlockPos const&, ::LevelChunk::SpawningArea const&, ::SpawnConditions const&)>;

    using SpawnTickCallback = ::std::function<void(::BlockPos, ::SpawnConditions)>;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~Spawner() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&) = 0;
#else // @header-generator platform
    virtual void initializeServerSide(::ResourcePackManager& rpm, ::IWorldRegistriesProvider& registries) = 0;
#endif // @header-generator platform

    virtual ::SpawnSettings const& getSpawnSettings() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSpawnSettings(::SpawnSettings const&) = 0;
#else // @header-generator platform
    virtual void setSpawnSettings(::SpawnSettings const& spawnSettings) = 0;
#endif // @header-generator platform

    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const = 0;

    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const = 0;

    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const = 0;

    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Mob* spawnMob(::BlockSource&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, bool, bool, bool);
#else // @header-generator platform
    virtual ::Mob* spawnMob(
        ::BlockSource&                     region,
        ::ActorDefinitionIdentifier const& id,
        ::Actor*                           spawner,
        ::Vec3 const&                      pos,
        bool                               naturalSpawn,
        bool                               surface,
        bool                               fromSpawner
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemActor* spawnItem(::BlockSource&, ::ItemStack const&, ::Actor*, ::Vec3 const&, int);
#else // @header-generator platform
    virtual ::ItemActor*
    spawnItem(::BlockSource& region, ::ItemStack const& inst, ::Actor* spawner, ::Vec3 const& pos, int throwTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* spawnProjectile(::BlockSource&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, ::Vec3 const&);
#else // @header-generator platform
    virtual ::Actor* spawnProjectile(
        ::BlockSource&                     region,
        ::ActorDefinitionIdentifier const& id,
        ::Actor*                           spawner,
        ::Vec3 const&                      position,
        ::Vec3 const&                      direction
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postProcessSpawnMobs(::BlockSource&, int, int, ::Random&) = 0;
#else // @header-generator platform
    virtual void postProcessSpawnMobs(::BlockSource& region, int xo, int zo, ::Random& random) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const) = 0;
#else // @header-generator platform
    virtual void
    tick(::BlockSource& region, ::LevelChunkVolumeData const& levelChunkVolumeData, ::ChunkPos const chunkPos) = 0;
#endif // @header-generator platform

    virtual void tickMobCount() = 0;

    virtual void incrementSpawnableTickedMob() = 0;

    virtual uint getSpawnableTickedMobCountPrevious() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_set<ActorUniqueID> spawnMobGroup(::BlockSource&, std::string const&, ::Vec3 const&, bool, bool, std::function<void (Mob&)>&&) = 0;
#else // @header-generator platform
    virtual ::std::unordered_set<::ActorUniqueID> spawnMobGroup(
        ::BlockSource&                  region,
        ::std::string const&            spawnGroupId,
        ::Vec3 const&                   pos,
        bool                            doScatter,
        bool                            validateDistToPlayer,
        ::std::function<void(::Mob&)>&& spawnedCallback
    ) = 0;
#endif // @header-generator platform

    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::tuple<std::array<SpawnCategory::Type, 8>, ulong> filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const;
#else // @header-generator platform
    virtual ::std::tuple<::std::array<::SpawnCategory::Type, 8>, uint64>
    filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void spawnForChunk(::BlockSource&, ::LevelChunkVolumeData const&, ::br::spawn::State&, ::gsl::span<SpawnCategory::Type>, ::IRandom&) const;
#else // @header-generator platform
    virtual void spawnForChunk(
        ::BlockSource&,
        ::LevelChunkVolumeData const&,
        ::br::spawn::State&,
        ::gsl::span<::SpawnCategory::Type>,
        ::IRandom&
    ) const;
#endif // @header-generator platform

    virtual void spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool findNextSpawnBlockUnder(
        ::BlockSource const&,
        ::BlockPos&,
        std::optional<SharedTypes::v1_26_20::MaterialType>,
        ::SpawnBlockRequirements
#else // @header-generator platform
    MCAPI static bool findNextSpawnBlockUnder(
        ::BlockSource const&                                   region,
        ::BlockPos&                                            pos,
        ::std::optional<::SharedTypes::v1_26_20::MaterialType> materialToSpawnIn,
        ::SpawnBlockRequirements                               spawnBlockRequirements
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<Spawner> from(::Level&, ::Experiments const&, ::IMinecraftEventing&);

    MCNAPI static bool isSpawnPositionOk(::MobSpawnRules const&, ::BlockSource&, ::BlockPos const&, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& NATURAL_MOB_SPAWN_OFFSET();
#else // @header-generator platform
    MCAPI static bool isSpawnPositionOk(
        ::MobSpawnRules const& rules,
        ::BlockSource&         region,
        ::BlockPos const&      pos,
        bool                   validateDistToPlayer
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Mob*
    $spawnMob(::BlockSource&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, bool, bool, bool);
#else // @header-generator platform
    MCAPI ::Mob* $spawnMob(
        ::BlockSource&                     region,
        ::ActorDefinitionIdentifier const& id,
        ::Actor*                           spawner,
        ::Vec3 const&                      pos,
        bool                               naturalSpawn,
        bool                               surface,
        bool                               fromSpawner
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemActor* $spawnItem(::BlockSource&, ::ItemStack const&, ::Actor*, ::Vec3 const&, int);
#else // @header-generator platform
    MCAPI ::ItemActor*
    $spawnItem(::BlockSource& region, ::ItemStack const& inst, ::Actor* spawner, ::Vec3 const& pos, int throwTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor*
    $spawnProjectile(::BlockSource&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI ::Actor* $spawnProjectile(
        ::BlockSource&                     region,
        ::ActorDefinitionIdentifier const& id,
        ::Actor*                           spawner,
        ::Vec3 const&                      position,
        ::Vec3 const&                      direction
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::tuple<std::array<SpawnCategory::Type, 8>, ulong>
           $filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const;
#else // @header-generator platform
    MCAPI ::std::tuple<::std::array<::SpawnCategory::Type, 8>, uint64>
    $filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $spawnForChunk(
#else // @header-generator platform
    MCFOLD void $spawnForChunk(
#endif // @header-generator platform
        ::BlockSource&,
        ::LevelChunkVolumeData const&,
        ::br::spawn::State&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::gsl::span<SpawnCategory::Type>,
#else // @header-generator platform
        ::gsl::span<::SpawnCategory::Type>,
#endif // @header-generator platform
        ::IRandom&
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const;
#else // @header-generator platform
    MCFOLD void $spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const;


#endif // @header-generator platform
    // NOLINTEND
};
