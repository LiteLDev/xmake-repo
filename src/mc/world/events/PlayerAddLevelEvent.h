#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerAddLevelEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>   mPlayer;
    ::ll::TypedStorage<4, 4, int> mAddLevel;
    ::ll::TypedStorage<4, 4, int> mNewLevel;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 4, int>                         mAddLevel;
    ::ll::TypedStorage<4, 4, int>                         mNewLevel;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerAddLevelEvent& operator=(PlayerAddLevelEvent const&);
    PlayerAddLevelEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
