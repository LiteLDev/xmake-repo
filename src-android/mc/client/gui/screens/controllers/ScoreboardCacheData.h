#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/IdentityDefinition.h"

struct ScoreboardCacheData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 8, long>         mId;
    ::ll::TypedStorage<8, 24, std::string> mScore;
    ::ll::UntypedStorage<1, 1>             mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScoreboardCacheData& operator=(ScoreboardCacheData const&);
    ScoreboardCacheData(ScoreboardCacheData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScoreboardCacheData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
