#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/enums/ClientInputLockCategory.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInputPermissionCategoryChangeIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<1, 1, ::ClientInputLockCategory>                 mCategory;
    ::ll::TypedStorage<1, 1, bool>                                      mEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInputPermissionCategoryChangeIntermediateData();
};

} // namespace ScriptModuleMinecraft
