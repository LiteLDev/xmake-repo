#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
// clang-format on

struct PostGameEventRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const GameEvent>>> mGameEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    PostGameEventRequestComponent& operator=(PostGameEventRequestComponent const&);
};
