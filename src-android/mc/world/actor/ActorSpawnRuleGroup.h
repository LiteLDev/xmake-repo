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
struct Tick;
namespace br::spawn { class SpawnPlacements; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorSpawnRuleGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mCategoryLookup;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mSpawnDelayStartMap;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                 mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSpawnRuleGroup& operator=(ActorSpawnRuleGroup const&);
    ActorSpawnRuleGroup(ActorSpawnRuleGroup const&);
    ActorSpawnRuleGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorSpawnRuleGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorSpawnRuleGroup(
        ::ResourcePackManager&,
        ::IWorldRegistriesProvider&,
        ::br::spawn::SpawnPlacements&,
        ::cereal::ReflectionCtx const&,
        ::LinkedAssetValidator&,
        ::Experiments const&,
        ::IMinecraftEventing&
    );

    MCNAPI int getActorSpawnPool(::ActorDefinitionIdentifier const&) const;

    MCNAPI int getDelayEnd(std::string const&) const;

    MCNAPI void offSetDelayByCurrentTick(::Tick const&);

    MCNAPI void resetDelayEnd(::MobSpawnRules, ulong, ::Random&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourcePackManager&,
        ::IWorldRegistriesProvider&,
        ::br::spawn::SpawnPlacements&,
        ::cereal::ReflectionCtx const&,
        ::LinkedAssetValidator&,
        ::Experiments const&,
        ::IMinecraftEventing&
    );
    // NOLINTEND

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
};
