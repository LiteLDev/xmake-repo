#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

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
    ::ll::TypedStorage<1, 1, uchar> mFlags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void set(::PlayerWaypointVisibilityRules::Flag, bool);

    MCNAPI bool test(::PlayerWaypointVisibilityRules::Flag) const;
    // NOLINTEND
};
