#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/events/gameevents/game_event_config/GameEventType.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::GameEvent const* creatorNameToEvent(std::string const&);

    MCNAPI static ::GameEvent const& typeToEvent(::GameEventConfig::GameEventType);
#else // @header-generator platform
    MCAPI static ::GameEvent const* creatorNameToEvent(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::set<HashedString> const& mExposedGameEvents();
#else // @header-generator platform
    MCAPI static ::std::set<::HashedString> const& mExposedGameEvents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<GameEventPair> const& mGameEventPairs();
#else // @header-generator platform
    MCAPI static ::std::vector<::GameEventPair> const& mGameEventPairs();
#endif // @header-generator platform
    // NOLINTEND
};
