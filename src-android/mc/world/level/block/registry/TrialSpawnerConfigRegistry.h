#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/registry/TrialSpawnerConfig.h"

class TrialSpawnerConfigRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, TrialSpawnerConfig>> mAliasesToConfig;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TrialSpawnerConfigRegistry();

    MCNAPI ::TrialSpawnerConfig const& getConfig(std::string const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
