#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/scripting/modules/parties/ScriptPartyInfo.h"

namespace ScriptModuleParties {

struct ScriptPartyChangedIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData>            mPlayer;
    ::ll::TypedStorage<8, 40, std::optional<ScriptModuleParties::ScriptPartyInfo>> mPartyInformation;
    // NOLINTEND
};

} // namespace ScriptModuleParties
