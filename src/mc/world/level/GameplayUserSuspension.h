#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#else // @header-generator platform
#endif // @header-generator platform

class GameplayUserSuspension {
public:
    // GameplayUserSuspension inner types define
    enum class State : int {
        Suspend = 0,
        Resume  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mWeakEntity;
    ::ll::UntypedStorage<4, 8>                 mSuspensionState;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkcabae6;
    ::ll::UntypedStorage<4, 4>  mUnkb21e1d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameplayUserSuspension& operator=(GameplayUserSuspension const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    GameplayUserSuspension(GameplayUserSuspension const&);
#endif // @header-generator platform
    GameplayUserSuspension();
};
