#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/PlayerScoreboardId.h"
#include "mc/world/scores/ScoreboardId.h"

struct ChangePlayerScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId>      mScoreboardId;
    ::ll::TypedStorage<8, 24, std::string>         mObjectiveName;
    ::ll::TypedStorage<4, 4, int>                  mScoreValue;
    ::ll::TypedStorage<8, 8, ::PlayerScoreboardId> mPlayerId;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
