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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const GameEvent>>> mGameEvents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::GameEvent const>>> mGameEvents;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PostGameEventRequestComponent& operator=(PostGameEventRequestComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
