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
#if defined(LL_PLAT_A) // @header-generator platform
class Dimension;
#else // @header-generator platform
#endif // @header-generator platform
class IMinecraftEventing;
#if defined(LL_PLAT_A) // @header-generator platform
class IRandom;
#else // @header-generator platform
#endif // @header-generator platform
class IWorldRegistriesProvider;
class ItemActor;
class ItemStack;
class Level;
class LevelChunkVolumeData;
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
class MobSpawnRules;
class MobSpawnerData;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Level&>                                        mLevel;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                           mEventing;
    ::ll::TypedStorage<8, 48, ::SpawnSettings>                                mSpawnSettings;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorSpawnRuleGroup>>        mActorSpawnRules;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpawnGroupRegistry>>         mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::br::spawn::EntityTypeCache>> mEntityTypeCache;
    ::ll::TypedStorage<8, 272, ::br::spawn::SpawnPlacements>                  mSpawnPlacements;
    ::ll::TypedStorage<4, 56, int[2][7]>                                      mBaseTypeCount;
    ::ll::TypedStorage<8, 128, ::std::unordered_map<::HashedString, int>[2]>  mEntityTypeCount;
    ::ll::TypedStorage<4, 4, int>                                             mTotalEntityCount;
    ::ll::TypedStorage<4, 4, uint>                                            mSpawnableMobTickCount;
    ::ll::TypedStorage<4, 4, uint>                                            mSpawnableMobTickCountPrevious;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockSpawner& operator=(BedrockSpawner const&);
    BedrockSpawner(BedrockSpawner const&);
    BedrockSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BedrockSpawner();
#else // @header-generator platform
    virtual ~BedrockSpawner() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&);
#else // @header-generator platform
    virtual void initializeServerSide(::ResourcePackManager& rpm, ::IWorldRegistriesProvider& registries) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SpawnSettings const& getSpawnSettings() const;
#else // @header-generator platform
    virtual ::SpawnSettings const& getSpawnSettings() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSpawnSettings(::SpawnSettings const&);
#else // @header-generator platform
    virtual void setSpawnSettings(::SpawnSettings const& spawnSettings) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const;
#else // @header-generator platform
    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const;
#else // @header-generator platform
    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const;
#else // @header-generator platform
    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const;
#else // @header-generator platform
    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemActor* spawnItem(::BlockSource&, ::ItemStack const&, ::Actor*, ::Vec3 const&, int);
#else // @header-generator platform
    virtual ::ItemActor* spawnItem(
        ::BlockSource&     region,
        ::ItemStack const& inst,
        ::Actor*           spawner,
        ::Vec3 const&      pos,
        int                throwTime
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postProcessSpawnMobs(::BlockSource&, int, int, ::Random&);
#else // @header-generator platform
    virtual void postProcessSpawnMobs(::BlockSource& region, int xo, int zo, ::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const);
#else // @header-generator platform
    virtual void tick(
        ::BlockSource&                region,
        ::LevelChunkVolumeData const& levelChunkVolumeData,
        ::ChunkPos const              chunkPos
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tickMobCount();
#else // @header-generator platform
    virtual void tickMobCount() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void incrementSpawnableTickedMob();
#else // @header-generator platform
    virtual void incrementSpawnableTickedMob() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getSpawnableTickedMobCountPrevious() const;
#else // @header-generator platform
    virtual uint getSpawnableTickedMobCountPrevious() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_set<ActorUniqueID> spawnMobGroup(::BlockSource&, std::string const&, ::Vec3 const&, bool, bool, std::function<void (Mob&)>&&);
#else // @header-generator platform
    virtual ::std::unordered_set<::ActorUniqueID> spawnMobGroup(
        ::BlockSource&                  region,
        ::std::string const&            spawnGroupId,
        ::Vec3 const&                   pos,
        bool                            doScatter,
        bool                            validateDistToPlayer,
        ::std::function<void(::Mob&)>&& spawnedCallback
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements();
    // clang-format on
#else // @header-generator platform
    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BedrockSpawner(::Level&, ::IMinecraftEventing&);
#else // @header-generator platform
    MCAPI BedrockSpawner(::Level& level, ::IMinecraftEventing& eventing);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendHerdEvents(::MobSpawnHerdInfo const&, std::vector<Mob*>&) const;
#else // @header-generator platform
    MCAPI void _spawnMobCluster(::BlockSource& region, ::BlockPos const& pos, ::SpawnConditions& conditions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _spawnMobCluster(::BlockSource&, ::BlockPos const&, ::SpawnConditions&);

    MCNAPI void _spawnMobInCluster(
        ::BlockSource&,
        ::ActorDefinitionIdentifier const&,
        ::BlockPos const&,
        ::SpawnConditions const&,
        std::vector<Mob*>&
#else // @header-generator platform
    MCAPI void _spawnMobInCluster(
        ::BlockSource&                     region,
        ::ActorDefinitionIdentifier const& id,
        ::BlockPos const&                  pos,
        ::SpawnConditions const&           conditions,
        ::std::vector<::Mob*>&             spawnGroup
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateBaseTypeCount(::BlockSource&, ::ChunkPos const&);
#else // @header-generator platform
    MCAPI void _updateBaseTypeCount(::BlockSource& region, ::ChunkPos const& center);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _isInsideAncientCity(::BlockSource const&, ::BlockPos);
#else // @header-generator platform
    MCAPI static bool _isInsideAncientCity(::BlockSource const& region, ::BlockPos pos);

    MCAPI static void _sendHerdEvents(::MobSpawnHerdInfo const& herdInfo, ::std::vector<::Mob*>& spawnGroup);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_set<ChunkPos> const& SPAWN_RING_OFFSETS();
#else // @header-generator platform
    MCAPI static ::std::unordered_set<::ChunkPos> const& SPAWN_RING_OFFSETS();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Level&, ::IMinecraftEventing&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Level& level, ::IMinecraftEventing& eventing);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&);
#else // @header-generator platform
    MCAPI void $initializeServerSide(::ResourcePackManager& rpm, ::IWorldRegistriesProvider& registries);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SpawnSettings const& $getSpawnSettings() const;
#else // @header-generator platform
    MCFOLD ::SpawnSettings const& $getSpawnSettings() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSpawnSettings(::SpawnSettings const&);
#else // @header-generator platform
    MCAPI void $setSpawnSettings(::SpawnSettings const& spawnSettings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorSpawnRuleGroup const* $getSpawnRules() const;
#else // @header-generator platform
    MCFOLD ::ActorSpawnRuleGroup const* $getSpawnRules() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorSpawnRuleGroup* $getSpawnRulesMutable() const;
#else // @header-generator platform
    MCFOLD ::ActorSpawnRuleGroup* $getSpawnRulesMutable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SpawnGroupRegistry const* $getSpawnGroupRegistry() const;
#else // @header-generator platform
    MCFOLD ::SpawnGroupRegistry const* $getSpawnGroupRegistry() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::spawn::EntityTypeCache* $getEntityTypeCache() const;
#else // @header-generator platform
    MCFOLD ::br::spawn::EntityTypeCache* $getEntityTypeCache() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemActor* $spawnItem(::BlockSource&, ::ItemStack const&, ::Actor*, ::Vec3 const&, int);
#else // @header-generator platform
    MCAPI ::ItemActor*
    $spawnItem(::BlockSource& region, ::ItemStack const& inst, ::Actor* spawner, ::Vec3 const& pos, int throwTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postProcessSpawnMobs(::BlockSource&, int, int, ::Random&);
#else // @header-generator platform
    MCAPI void $postProcessSpawnMobs(::BlockSource& region, int xo, int zo, ::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const);
#else // @header-generator platform
    MCAPI void
    $tick(::BlockSource& region, ::LevelChunkVolumeData const& levelChunkVolumeData, ::ChunkPos const chunkPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tickMobCount();
#else // @header-generator platform
    MCAPI void $tickMobCount();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $incrementSpawnableTickedMob();
#else // @header-generator platform
    MCAPI void $incrementSpawnableTickedMob();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getSpawnableTickedMobCountPrevious() const;
#else // @header-generator platform
    MCAPI uint $getSpawnableTickedMobCountPrevious() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_set<ActorUniqueID>
           $spawnMobGroup(::BlockSource&, std::string const&, ::Vec3 const&, bool, bool, std::function<void(Mob&)>&&);
#else // @header-generator platform
    MCAPI ::std::unordered_set<::ActorUniqueID> $spawnMobGroup(
        ::BlockSource&                  region,
        ::std::string const&            spawnGroupId,
        ::Vec3 const&                   pos,
        bool                            doScatter,
        bool                            validateDistToPlayer,
        ::std::function<void(::Mob&)>&& spawnedCallback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::spawn::SpawnPlacements& $getSpawnPlacements();
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::br::spawn::SpawnPlacements& $getSpawnPlacements();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
