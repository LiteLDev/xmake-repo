#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"

struct RewindSimulationDebugContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::StrictEntityContext> mLiveEntity;
    ::ll::TypedStorage<4, 8, ::StrictEntityContext> mRewindEntity;
    ::ll::TypedStorage<8, 24, std::string>          mActorIdentifier;
    ::ll::TypedStorage<8, 8, ulong>                 mLiveTick;
    ::ll::TypedStorage<8, 8, ulong>                 mRewindTick;
    ::ll::TypedStorage<8, 8, ulong>                 mRewindBegin;
    // NOLINTEND
};
