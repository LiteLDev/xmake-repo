#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/game_event_config/GameEventType.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
class HashedString;
struct GameEventPair;
// clang-format on

class GameEventMapping {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::GameEvent const* creatorNameToEvent(std::string const&);

    MCNAPI static ::GameEvent const& typeToEvent(::GameEventConfig::GameEventType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::set<HashedString> const& mExposedGameEvents();

    MCNAPI static std::vector<GameEventPair> const& mGameEventPairs();
    // NOLINTEND
};
