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
    using OnSpawnHerd = std::function<void(std::vector<Mob*>&, Random&)>;

    using OnSelectActor = std::function<ActorDefinitionIdentifier(Random&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mIdentifier;
    ::ll::UntypedStorage<8, 368>                            mSpawnRules;
    ::ll::UntypedStorage<8, 48>                             mOnSpawnHerd;
    ::ll::UntypedStorage<8, 48>                             mOnSelectEntity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MobSpawnerData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MobSpawnerData from(::br::worldgen::SpawnerData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
