#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerAddExpEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mPlayer;
    ::ll::UntypedStorage<4, 8>  mExp;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAddExpEvent& operator=(PlayerAddExpEvent const&);
    PlayerAddExpEvent();
};
