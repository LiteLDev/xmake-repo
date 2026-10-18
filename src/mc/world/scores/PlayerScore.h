#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ScoreboardId.h"

struct PlayerScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId> mScoreboardId;
    ::ll::TypedStorage<4, 4, int>             mScore;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerScore& operator=(PlayerScore const&);
    PlayerScore(PlayerScore const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getScore() const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
