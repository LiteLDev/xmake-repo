#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ScoreboardId.h"

struct ChangeFakePlayerScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId> mScoreboardId;
    ::ll::TypedStorage<8, 24, std::string>    mObjectiveName;
    ::ll::TypedStorage<4, 4, int>             mScoreValue;
    ::ll::TypedStorage<8, 24, std::string>    mFakePlayerName;
    // NOLINTEND
};
