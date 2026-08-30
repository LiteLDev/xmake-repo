#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/content/PackSelectResult.h"

struct PackMoveResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PackSelectResult> mState;
    ::ll::TypedStorage<8, 24, std::string>       mMovedPack;
    // NOLINTEND

public:
    // prevent constructor by default
    PackMoveResult& operator=(PackMoveResult const&);
    PackMoveResult();
};
