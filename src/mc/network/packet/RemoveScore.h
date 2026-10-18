#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ScoreboardId.h"

struct RemoveScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId>                 mScoreboardId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mObjectiveName;
    // NOLINTEND
};
#endif // @header-generator platform
