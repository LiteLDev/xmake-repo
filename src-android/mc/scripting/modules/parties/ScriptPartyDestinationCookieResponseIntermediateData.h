#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/scripting/modules/parties/ScriptPartyInfo.h"

namespace ScriptModuleParties {

struct ScriptPartyDestinationCookieResponseIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                              mCookie;
    ::ll::TypedStorage<1, 1, bool>                                      mAccepted;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 32, ::ScriptModuleParties::ScriptPartyInfo>   mPartyInformation;
    // NOLINTEND
};

} // namespace ScriptModuleParties
