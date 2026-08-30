#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScoreboardId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> mActorUniqueId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator!=(::PlayerScoreboardId const&) const;

    MCNAPI bool operator==(::PlayerScoreboardId const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PlayerScoreboardId const& INVALID();
    // NOLINTEND
};
