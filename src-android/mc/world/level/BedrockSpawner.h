#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/Spawner.h"
#include "mc/world/level/chunk/SpawnPlacements.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorSpawnRuleGroup;
class BlockPos;
class BlockSource;
class ChunkPos;
class Dimension;
class IMinecraftEventing;
class IRandom;
class IWorldRegistriesProvider;
class ItemActor;
class ItemStack;
class Level;
class LevelChunkVolumeData;
class Mob;
class MobSpawnRules;
class MobSpawnerData;
class Random;
class ResourcePackManager;
class SpawnConditions;
class SpawnGroupRegistry;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct MobSpawnHerdInfo;
namespace br::spawn { class EntityTypeCache; }
// clang-format on

class BedrockSpawner : public ::Spawner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>                                    mLevel;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                       mEventing;
    ::ll::TypedStorage<8, 40, ::SpawnSettings>                            mSpawnSettings;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorSpawnRuleGroup>>        mActorSpawnRules;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SpawnGroupRegistry>>         mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<br::spawn::EntityTypeCache>> mEntityTypeCache;
    ::ll::TypedStorage<8, 224, ::br::spawn::SpawnPlacements>              mSpawnPlacements;
    ::ll::UntypedStorage<4, 56>                                           mBaseTypeCount;
    ::ll::TypedStorage<8, 80, std::unordered_map<HashedString, int>[2]>   mEntityTypeCount;
    ::ll::TypedStorage<4, 4, int>                                         mTotalEntityCount;
    ::ll::TypedStorage<4, 4, uint>                                        mSpawnableMobTickCount;
    ::ll::TypedStorage<4, 4, uint>                                        mSpawnableMobTickCountPrevious;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockSpawner& operator=(BedrockSpawner const&);
    BedrockSpawner(BedrockSpawner const&);
    BedrockSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BedrockSpawner();

    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&);

    virtual ::SpawnSettings const& getSpawnSettings() const;

    virtual void setSpawnSettings(::SpawnSettings const&);

    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const;

    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const;

    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const;

    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const;

    virtual ::ItemActor* spawnItem(::BlockSource&, ::ItemStack const&, ::Actor*, ::Vec3 const&, int);

    virtual void postProcessSpawnMobs(::BlockSource&, int, int, ::Random&);

    virtual void tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const);

    virtual void tickMobCount();

    virtual void incrementSpawnableTickedMob();

    virtual uint getSpawnableTickedMobCountPrevious() const;

    virtual std::unordered_set<ActorUniqueID> spawnMobGroup(::BlockSource&, std::string const&, ::Vec3 const&, bool, bool, std::function<void (Mob&)>&&);

    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BedrockSpawner(::Level&, ::IMinecraftEventing&);

    MCNAPI void _sendHerdEvents(::MobSpawnHerdInfo const&, std::vector<Mob*>&) const;

    MCNAPI void _spawnMobCluster(::BlockSource&, ::BlockPos const&, ::SpawnConditions&);

    MCNAPI void _spawnMobInCluster(
        ::BlockSource&,
        ::ActorDefinitionIdentifier const&,
        ::BlockPos const&,
        ::SpawnConditions const&,
        std::vector<Mob*>&
    );

    MCNAPI void _updateBaseTypeCount(::BlockSource&, ::ChunkPos const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isInsideAncientCity(::BlockSource const&, ::BlockPos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_set<ChunkPos> const& SPAWN_RING_OFFSETS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level&, ::IMinecraftEventing&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&);

    MCNAPI ::SpawnSettings const& $getSpawnSettings() const;

    MCNAPI void $setSpawnSettings(::SpawnSettings const&);

    MCNAPI ::ActorSpawnRuleGroup const* $getSpawnRules() const;

    MCNAPI ::ActorSpawnRuleGroup* $getSpawnRulesMutable() const;

    MCNAPI ::SpawnGroupRegistry const* $getSpawnGroupRegistry() const;

    MCNAPI ::br::spawn::EntityTypeCache* $getEntityTypeCache() const;

    MCNAPI ::ItemActor* $spawnItem(::BlockSource&, ::ItemStack const&, ::Actor*, ::Vec3 const&, int);

    MCNAPI void $postProcessSpawnMobs(::BlockSource&, int, int, ::Random&);

    MCNAPI void $tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const);

    MCNAPI void $tickMobCount();

    MCNAPI void $incrementSpawnableTickedMob();

    MCNAPI uint $getSpawnableTickedMobCountPrevious() const;

    MCNAPI std::unordered_set<ActorUniqueID>
           $spawnMobGroup(::BlockSource&, std::string const&, ::Vec3 const&, bool, bool, std::function<void(Mob&)>&&);

    MCNAPI ::br::spawn::SpawnPlacements& $getSpawnPlacements();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
