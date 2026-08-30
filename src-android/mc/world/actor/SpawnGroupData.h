#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/MobSpawnRules.h"

class SpawnGroupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mIdentifier;
    ::ll::TypedStorage<8, 24, std::vector<MobSpawnRules>> mSpawnRules;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnGroupData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnGroupData(std::string const&, ::MobSpawnRules&);

    MCNAPI void addSpawnRules(::MobSpawnRules&);

    MCNAPI std::vector<MobSpawnRules> const& getSpawnRules() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::MobSpawnRules&);
    // NOLINTEND
};
