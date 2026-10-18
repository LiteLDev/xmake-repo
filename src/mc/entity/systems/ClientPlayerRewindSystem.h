#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorOwnerComponent;
#else // @header-generator platform
#endif // @header-generator platform
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class ReplayStateComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct ReplayStateTrackerComponent;
struct TickingSystemWithInfo;
// clang-format on

class ClientPlayerRewindSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo accumulateHistoryChangesSystem();
#else // @header-generator platform
    MCAPI static void applyHistoryChangesToLiveEntity(
        ::ReplayStateTrackerComponent const& postSimulationState,
        ::EntityContext&                     liveData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void applyHistoryChangesToLiveEntity(::ReplayStateTrackerComponent const&, ::EntityContext&);

    MCNAPI static ::TickingSystemWithInfo createCorrectionInterpolationSystem();

    MCNAPI static ::TickingSystemWithInfo createRewindHistorySystem();

    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static ::TickingSystemWithInfo discardHistoryChangesSystem();

    MCNAPI static ::TickingSystemWithInfo publishHistoryChangesSystem();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::TickingSystemWithInfo createCorrectionInterpolationSystem();

    MCAPI static ::TickingSystemWithInfo createRewindHistorySystem();

    MCAPI static ::TickingSystemWithInfo createSystem();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
