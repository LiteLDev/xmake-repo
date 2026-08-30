#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityContext;
class ReplayStateComponent;
struct ReplayStateTrackerComponent;
struct TickingSystemWithInfo;
// clang-format on

class ClientPlayerRewindSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo accumulateHistoryChangesSystem();

    MCNAPI static void applyHistoryChangesToLiveEntity(::ReplayStateTrackerComponent const&, ::EntityContext&);

    MCNAPI static ::TickingSystemWithInfo createCorrectionInterpolationSystem();

    MCNAPI static ::TickingSystemWithInfo createRewindHistorySystem();

    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static ::TickingSystemWithInfo discardHistoryChangesSystem();

    MCNAPI static ::TickingSystemWithInfo publishHistoryChangesSystem();
    // NOLINTEND
};
