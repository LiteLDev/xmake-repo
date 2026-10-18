#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ScoreboardId.h"

struct ScoreboardIdentityPacketInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ScoreboardId>      mScoreboardId;
    ::ll::TypedStorage<8, 16, std::optional<long>> mPlayerId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ScoreboardId>         mScoreboardId;
    ::ll::TypedStorage<8, 16, ::std::optional<int64>> mPlayerId;
#endif // @header-generator platform
    // NOLINTEND
};
