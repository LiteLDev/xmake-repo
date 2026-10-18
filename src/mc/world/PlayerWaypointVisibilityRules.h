#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class PlayerWaypointVisibilityRules {
public:
    // PlayerWaypointVisibilityRules inner types define
    enum class Flag : uchar {
        Spectator            = 1,
        SpectatorToSpectator = 2,
        Hidden               = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar> mFlags;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk73f872;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI void set(::PlayerWaypointVisibilityRules::Flag, bool);

    MCNAPI bool test(::PlayerWaypointVisibilityRules::Flag) const;
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    PlayerWaypointVisibilityRules& operator=(PlayerWaypointVisibilityRules const&);
    PlayerWaypointVisibilityRules(PlayerWaypointVisibilityRules const&);
    PlayerWaypointVisibilityRules();
#endif // @header-generator platform
};
