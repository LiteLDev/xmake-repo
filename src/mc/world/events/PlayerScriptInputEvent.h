#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/input/ScriptingInputButton.h"
#include "mc/input/ScriptingInputButtonState.h"

struct PlayerScriptInputEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>            mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>            mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScriptingInputButton>      mButton;
    ::ll::TypedStorage<4, 4, ::ScriptingInputButtonState> mNewState;
    // NOLINTEND
};
