#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInputModeChangeIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<4, 4, ::InputMode>                               mNewInputModeUsed;
    ::ll::TypedStorage<4, 4, ::InputMode>                               mPreviousInputModeUsed;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInputModeChangeIntermediateData();
};

} // namespace ScriptModuleMinecraft
