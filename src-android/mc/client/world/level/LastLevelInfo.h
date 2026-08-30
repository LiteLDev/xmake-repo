#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/ExperimentStorage.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

class LastLevelInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, std::optional<ExperimentStorage>> mExperiments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onAllClientsExitedLevel(::LevelData const&);
    // NOLINTEND
};
