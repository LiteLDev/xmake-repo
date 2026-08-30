#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScoreboardEventListener.h"
#include "mc/world/events/SubscribedObjectives.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class PlayerScoreboardEventListener : public ::ScoreboardEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ScoreboardId, SubscribedObjectives>> mSubscribedObjectives;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerScoreboardEventListener();

    virtual ::EventResult onScoreChanged(::ScoreboardId const&, std::string const&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SubscribedObjectives& getPlayerSubscriptions(::ScoreboardId const&, ::Player const&);

    MCNAPI void removePlayerSubscriptions(::ScoreboardId const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onScoreChanged(::ScoreboardId const&, std::string const&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
