#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerAddEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAddEvent& operator=(PlayerAddEvent const&);
    PlayerAddEvent();
};
