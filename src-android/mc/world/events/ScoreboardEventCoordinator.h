#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/ScoreboardEventListener.h"

// auto generated forward declare list
// clang-format off
struct ScoreboardId;
// clang-format on

class ScoreboardEventCoordinator : public ::EventCoordinator<ScoreboardEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScoreboardEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void sendOnObjectiveAdded(std::string const&);

    MCNAPI void sendOnObjectiveRemoved(std::string const&);

    MCNAPI void sendOnScoreChanged(::ScoreboardId const&, std::string const&, int);

    MCNAPI void sendOnScoreboardIdentityRemoved(::ScoreboardId const&);
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
