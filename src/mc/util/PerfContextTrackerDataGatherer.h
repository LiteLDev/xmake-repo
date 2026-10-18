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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _gatherActorCount(::EntityRegistry&);

    MCNAPI static void _gatherPlayerCount(::EntityRegistry&);

    MCNAPI static void _resolveGameplayMode();

    MCNAPI static void gatherData(::EntityRegistry&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static void _gatherActorCount(::EntityRegistry& registry);

    MCNAPI static void _gatherPlayerCount(::EntityRegistry& registry);

    MCNAPI static void _resolveGameplayMode();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
