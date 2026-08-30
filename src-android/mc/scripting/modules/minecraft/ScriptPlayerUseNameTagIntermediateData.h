#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerUseNameTagIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mEntityNamed;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>               mPreviousName;
    ::ll::TypedStorage<8, 24, std::string>                              mNewName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerUseNameTagIntermediateData();
};

} // namespace ScriptModuleMinecraft
