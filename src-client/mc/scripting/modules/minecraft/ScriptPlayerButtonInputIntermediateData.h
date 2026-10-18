#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/input/ScriptingInputButton.h"
#include "mc/input/ScriptingInputButtonState.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerButtonInputIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<4, 4, ::ScriptingInputButton>                    mButton;
    ::ll::TypedStorage<4, 4, ::ScriptingInputButtonState>               mNewState;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerButtonInputIntermediateData();
};

} // namespace ScriptModuleMinecraft
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
