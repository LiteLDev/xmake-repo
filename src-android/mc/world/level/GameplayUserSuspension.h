#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

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
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mWeakEntity;
    ::ll::UntypedStorage<4, 8>                 mSuspensionState;
    // NOLINTEND

public:
    // prevent constructor by default
    GameplayUserSuspension& operator=(GameplayUserSuspension const&);
    GameplayUserSuspension();
};
