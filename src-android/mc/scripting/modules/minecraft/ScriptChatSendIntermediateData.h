#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ChatEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptChatSendIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>                                                  mChatMsg;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData const>                     mPlayer;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ScriptModuleMinecraft::ScriptActorData>>> mTargets;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChatSendIntermediateData();
};

} // namespace ScriptModuleMinecraft
