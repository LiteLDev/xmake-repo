#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class PerfContextTrackerDataGatherer {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _gatherActorCount(::EntityRegistry&);

    MCNAPI static void _gatherPlayerCount(::EntityRegistry&);

    MCNAPI static void _resolveGameplayMode();

    MCNAPI static void gatherData(::EntityRegistry&);
    // NOLINTEND
};
