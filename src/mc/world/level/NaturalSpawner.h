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
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
namespace br::spawn { struct EntityType; }
#else // @header-generator platform
#endif // @header-generator platform
namespace br::spawn { struct State; }
// clang-format on

class NaturalSpawner : public ::Spawner {
public:
    // NaturalSpawner inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using SpawnPredicate = std::function<bool(ActorType, BlockPos, const LevelChunkVolumeData&)>;
#else // @header-generator platform
    using AfterSpawnCallback = ::std::function<void(::Mob&, ::LevelChunkVolumeData const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using AfterSpawnCallback = std::function<void(Mob&, const LevelChunkVolumeData&)>;
#else // @header-generator platform
    using SpawnPredicate = ::std::function<bool(::ActorType, ::BlockPos, ::LevelChunkVolumeData const&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Level&>                                    mLevel;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                       mEventing;
    ::ll::TypedStorage<8, 40, ::SpawnSettings>                            mSpawnSettings;
    ::ll::TypedStorage<8, 224, ::br::spawn::SpawnPlacements>              mSpawnPlacements;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorSpawnRuleGroup>>        mActorSpawnRules;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SpawnGroupRegistry>>         mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<br::spawn::EntityTypeCache>> mEntityTypeCache;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Level&>                                        mLevel;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                           mEventing;
    ::ll::TypedStorage<8, 48, ::SpawnSettings>                                mSpawnSettings;
    ::ll::TypedStorage<8, 272, ::br::spawn::SpawnPlacements>                  mSpawnPlacements;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorSpawnRuleGroup>>        mActorSpawnRules;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpawnGroupRegistry>>         mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::br::spawn::EntityTypeCache>> mEntityTypeCache;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NaturalSpawner& operator=(NaturalSpawner const&);
    NaturalSpawner(NaturalSpawner const&);
    NaturalSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~NaturalSpawner() = default;
#else // @header-generator platform
    virtual ~NaturalSpawner() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&);
#else // @header-generator platform
    virtual ::std::tuple<::std::array<::SpawnCategory::Type, 8>, uint64>
    filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SpawnSettings const& getSpawnSettings() const;
#else // @header-generator platform
    virtual void spawnForChunk(
        ::BlockSource&,
        ::LevelChunkVolumeData const&,
        ::br::spawn::State&,
        ::gsl::span<::SpawnCategory::Type>,
        ::IRandom&
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSpawnSettings(::SpawnSettings const&);
#else // @header-generator platform
    virtual void spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const;
#else // @header-generator platform
    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const;
#else // @header-generator platform
    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const;
#else // @header-generator platform
    virtual ::SpawnSettings const& getSpawnSettings() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const;
#else // @header-generator platform
    virtual void setSpawnSettings(::SpawnSettings const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postProcessSpawnMobs(::BlockSource&, int, int, ::Random&);
#else // @header-generator platform
    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const);
#else // @header-generator platform
    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tickMobCount();
#else // @header-generator platform
    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void incrementSpawnableTickedMob();
#else // @header-generator platform
    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getSpawnableTickedMobCountPrevious() const;
#else // @header-generator platform
    virtual void postProcessSpawnMobs(::BlockSource&, int, int, ::Random&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_set<ActorUniqueID> spawnMobGroup(::BlockSource&, std::string const&, ::Vec3 const&, bool, bool, std::function<void (Mob&)>&&);
#else // @header-generator platform
    virtual void tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements();
#else // @header-generator platform
    virtual void tickMobCount() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::tuple<std::array<SpawnCategory::Type, 8>, ulong> filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const;
#else // @header-generator platform
    virtual void incrementSpawnableTickedMob() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void spawnForChunk(::BlockSource&, ::LevelChunkVolumeData const&, ::br::spawn::State&, ::gsl::span<SpawnCategory::Type>, ::IRandom&) const;
#else // @header-generator platform
    virtual uint getSpawnableTickedMobCountPrevious() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    isValidEmptySpawnBlock(::BlockSource&, ::BlockPos, ::Block const&, ::br::spawn::EntityType const&);
#else // @header-generator platform
    virtual ::std::unordered_set<::ActorUniqueID> spawnMobGroup(
        ::BlockSource&,
        ::std::string const&,
        ::Vec3 const&,
        bool,
        bool,
        ::std::function<void(::Mob&)>&&
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
