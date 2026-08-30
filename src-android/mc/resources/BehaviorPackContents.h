#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BehaviorPackContents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mEntities;
    ::ll::TypedStorage<4, 4, uint> mLoots;
    ::ll::TypedStorage<4, 4, uint> mTrades;
    ::ll::TypedStorage<4, 4, uint> mPlugins;
    // NOLINTEND
};
