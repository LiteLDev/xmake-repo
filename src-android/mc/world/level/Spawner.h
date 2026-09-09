#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/SpawnBlockRequirements.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorSpawnRuleGroup;
class Biome;
class BlockPos;
class BlockSource;
class ChunkPos;
class Experiments;
class IMinecraftEventing;
class IRandom;
class IWorldRegistriesProvider;
class ItemActor;
class ItemStack;
class Level;
class LevelChunkVolumeData;
class Mob;
class MobSpawnRules;
class Random;
class ResourcePackManager;
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
    using MobSpawnedCallback = std::function<void(Mob&)>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Spawner() = default;

    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&) = 0;

    virtual ::SpawnSettings const& getSpawnSettings() const = 0;

    virtual void setSpawnSettings(::SpawnSettings const&) = 0;

    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const = 0;

    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const = 0;

    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const = 0;

    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const = 0;

    virtual ::Mob* spawnMob(::BlockSource&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, bool, bool, bool);

    virtual ::ItemActor* spawnItem(::BlockSource&, ::ItemStack const&, ::Actor*, ::Vec3 const&, int);

    virtual ::Actor* spawnProjectile(::BlockSource&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, ::Vec3 const&);

    virtual void postProcessSpawnMobs(::BlockSource&, int, int, ::Random&) = 0;

    virtual void tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const) = 0;

    virtual void tickMobCount() = 0;

    virtual void incrementSpawnableTickedMob() = 0;

    virtual uint getSpawnableTickedMobCountPrevious() const = 0;

    virtual std::unordered_set<ActorUniqueID> spawnMobGroup(::BlockSource&, std::string const&, ::Vec3 const&, bool, bool, std::function<void (Mob&)>&&) = 0;

    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements() = 0;

    virtual std::tuple<std::array<SpawnCategory::Type, 8>, ulong> filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const;

    virtual void spawnForChunk(::BlockSource&, ::LevelChunkVolumeData const&, ::br::spawn::State&, ::gsl::span<SpawnCategory::Type>, ::IRandom&) const;

    virtual void spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool findNextSpawnBlockUnder(
        ::BlockSource const&,
        ::BlockPos&,
        std::optional<SharedTypes::v1_26_20::MaterialType>,
        ::SpawnBlockRequirements
    );

    MCNAPI static std::unique_ptr<Spawner> from(::Level&, ::Experiments const&, ::IMinecraftEventing&);

    MCNAPI static bool isSpawnPositionOk(::MobSpawnRules const&, ::BlockSource&, ::BlockPos const&, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& NATURAL_MOB_SPAWN_OFFSET();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Mob*
    $spawnMob(::BlockSource&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, bool, bool, bool);

    MCNAPI ::ItemActor* $spawnItem(::BlockSource&, ::ItemStack const&, ::Actor*, ::Vec3 const&, int);

    MCNAPI ::Actor*
    $spawnProjectile(::BlockSource&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, ::Vec3 const&);

    MCNAPI std::tuple<std::array<SpawnCategory::Type, 8>, ulong>
           $filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const;

    MCNAPI void $spawnForChunk(
        ::BlockSource&,
        ::LevelChunkVolumeData const&,
        ::br::spawn::State&,
        ::gsl::span<SpawnCategory::Type>,
        ::IRandom&
    ) const;

    MCNAPI void $spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const;
    // NOLINTEND
};
