#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/level/GameType.h"

struct PlayerGameModeChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::GameType>       mFromGameMode;
    ::ll::TypedStorage<4, 4, ::GameType>       mToGameMode;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerGameModeChangeEvent& operator=(PlayerGameModeChangeEvent const&);
    PlayerGameModeChangeEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
