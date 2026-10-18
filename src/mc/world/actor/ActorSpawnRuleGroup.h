#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class IMinecraftEventing;
class IWorldRegistriesProvider;
class LinkedAssetValidator;
class MobSpawnRules;
class Random;
class ResourcePackManager;
struct ActorDefinitionIdentifier;
#if defined(LL_PLAT_A) // @header-generator platform
struct Tick;
#else // @header-generator platform
#endif // @header-generator platform
namespace br::spawn { class SpawnPlacements; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorSpawnRuleGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mCategoryLookup;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mSpawnDelayStartMap;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                 mEventing;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mCategoryLookup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mSpawnDelayStartMap;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                     mEventing;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSpawnRuleGroup& operator=(ActorSpawnRuleGroup const&);
    ActorSpawnRuleGroup(ActorSpawnRuleGroup const&);
    ActorSpawnRuleGroup();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorSpawnRuleGroup();
#else // @header-generator platform
    virtual ~ActorSpawnRuleGroup() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorSpawnRuleGroup(
        ::ResourcePackManager&,
        ::IWorldRegistriesProvider&,
        ::br::spawn::SpawnPlacements&,
        ::cereal::ReflectionCtx const&,
        ::LinkedAssetValidator&,
        ::Experiments const&,
        ::IMinecraftEventing&
#else // @header-generator platform
    MCAPI ActorSpawnRuleGroup(
        ::ResourcePackManager&         resourcePackManager,
        ::IWorldRegistriesProvider&    registries,
        ::br::spawn::SpawnPlacements&  spawnPlacements,
        ::cereal::ReflectionCtx const& ctx,
        ::LinkedAssetValidator&        linkedAssetValidator,
        ::Experiments const&           experiments,
        ::IMinecraftEventing&          eventing
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getActorSpawnPool(::ActorDefinitionIdentifier const&) const;
#else // @header-generator platform
    MCAPI int getActorSpawnPool(::ActorDefinitionIdentifier const& id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getDelayEnd(std::string const&) const;
#else // @header-generator platform
    MCAPI int getDelayEnd(::std::string const& id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void offSetDelayByCurrentTick(::Tick const&);

    MCNAPI void resetDelayEnd(::MobSpawnRules, ulong, ::Random&);
#else // @header-generator platform
    MCAPI void resetDelayEnd(::MobSpawnRules spawnRules, uint64 age, ::Random& random);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ResourcePackManager&,
        ::IWorldRegistriesProvider&,
        ::br::spawn::SpawnPlacements&,
        ::cereal::ReflectionCtx const&,
        ::LinkedAssetValidator&,
        ::Experiments const&,
        ::IMinecraftEventing&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ResourcePackManager&         resourcePackManager,
        ::IWorldRegistriesProvider&    registries,
        ::br::spawn::SpawnPlacements&  spawnPlacements,
        ::cereal::ReflectionCtx const& ctx,
        ::LinkedAssetValidator&        linkedAssetValidator,
        ::Experiments const&           experiments,
        ::IMinecraftEventing&          eventing
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
