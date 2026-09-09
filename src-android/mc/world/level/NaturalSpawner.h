#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/Spawner.h"
#include "mc/world/level/chunk/SpawnPlacements.h"

// auto generated forward declare list
// clang-format off
class ActorSpawnRuleGroup;
class Biome;
class Block;
class BlockPos;
class BlockSource;
class ChunkPos;
class IMinecraftEventing;
class IRandom;
class IWorldRegistriesProvider;
class Level;
class LevelChunkVolumeData;
class Mob;
class Random;
class ResourcePackManager;
class SpawnGroupRegistry;
class Vec3;
struct ActorUniqueID;
namespace br::spawn { class EntityTypeCache; }
namespace br::spawn { struct EntityType; }
namespace br::spawn { struct State; }
// clang-format on

class NaturalSpawner : public ::Spawner {
public:
    // NaturalSpawner inner types define
    using SpawnPredicate = std::function<bool(ActorType, BlockPos, const LevelChunkVolumeData&)>;

    using AfterSpawnCallback = std::function<void(Mob&, const LevelChunkVolumeData&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>                                    mLevel;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                       mEventing;
    ::ll::TypedStorage<8, 40, ::SpawnSettings>                            mSpawnSettings;
    ::ll::TypedStorage<8, 224, ::br::spawn::SpawnPlacements>              mSpawnPlacements;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorSpawnRuleGroup>>        mActorSpawnRules;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SpawnGroupRegistry>>         mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<br::spawn::EntityTypeCache>> mEntityTypeCache;
    // NOLINTEND

public:
    // prevent constructor by default
    NaturalSpawner& operator=(NaturalSpawner const&);
    NaturalSpawner(NaturalSpawner const&);
    NaturalSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~NaturalSpawner() = default;

    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&);

    virtual ::SpawnSettings const& getSpawnSettings() const;

    virtual void setSpawnSettings(::SpawnSettings const&);

    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const;

    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const;

    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const;

    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const;

    virtual void postProcessSpawnMobs(::BlockSource&, int, int, ::Random&);

    virtual void tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const);

    virtual void tickMobCount();

    virtual void incrementSpawnableTickedMob();

    virtual uint getSpawnableTickedMobCountPrevious() const;

    virtual std::unordered_set<ActorUniqueID> spawnMobGroup(::BlockSource&, std::string const&, ::Vec3 const&, bool, bool, std::function<void (Mob&)>&&);

    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements();

    virtual std::tuple<std::array<SpawnCategory::Type, 8>, ulong> filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const;

    virtual void spawnForChunk(::BlockSource&, ::LevelChunkVolumeData const&, ::br::spawn::State&, ::gsl::span<SpawnCategory::Type>, ::IRandom&) const;

    virtual void spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    isValidEmptySpawnBlock(::BlockSource&, ::BlockPos, ::Block const&, ::br::spawn::EntityType const&);
    // NOLINTEND
};
