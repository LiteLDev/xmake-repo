#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInputModeChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>           mPlayer;
    ::ll::TypedStorage<4, 4, ::InputMode> mNewInputModeUsed;
    ::ll::TypedStorage<4, 4, ::InputMode> mPreviousInputModeUsed;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInputModeChangeEvent& operator=(PlayerInputModeChangeEvent const&);
    PlayerInputModeChangeEvent();
};
