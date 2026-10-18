#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/biome/MobSpawnRules.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Random;
namespace br::worldgen { struct SpawnerData; }
// clang-format on

class MobSpawnerData : public ::WeightedRandom::WeighedRandomItem {
public:
    // MobSpawnerData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using OnSpawnHerd = std::function<void(std::vector<Mob*>&, Random&)>;
#else // @header-generator platform
    using OnSelectActor = ::std::function<::ActorDefinitionIdentifier(::Random&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using OnSelectActor = std::function<ActorDefinitionIdentifier(Random&)>;
#else // @header-generator platform
    using OnSpawnHerd = ::std::function<void(::std::vector<::Mob*>&, ::Random&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mIdentifier;
    ::ll::UntypedStorage<8, 368>                            mSpawnRules;
    ::ll::UntypedStorage<8, 48>                             mOnSpawnHerd;
    ::ll::UntypedStorage<8, 48>                             mOnSelectEntity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MobSpawnerData();
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>                             mIdentifier;
    ::ll::TypedStorage<8, 392, ::MobSpawnRules>                                         mSpawnRules;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::vector<::Mob*>&, ::Random&)>> mOnSpawnHerd;
    ::ll::TypedStorage<8, 64, ::std::function<::ActorDefinitionIdentifier(::Random&)>>  mOnSelectEntity;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MobSpawnerData from(::br::worldgen::SpawnerData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::MobSpawnerData from(::br::worldgen::SpawnerData const& spawnerData);
#endif // @header-generator platform
    // NOLINTEND
};
