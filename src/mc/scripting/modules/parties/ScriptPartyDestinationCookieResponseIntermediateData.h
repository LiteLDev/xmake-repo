#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/scripting/modules/parties/ScriptPartyInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleParties {

struct ScriptPartyDestinationCookieResponseIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                              mCookie;
    ::ll::TypedStorage<1, 1, bool>                                      mAccepted;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 32, ::ScriptModuleParties::ScriptPartyInfo>   mPartyInformation;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk41b4b6;
    ::ll::UntypedStorage<1, 1>  mUnkbd4c77;
    ::ll::UntypedStorage<8, 96> mUnk51f458;
    ::ll::UntypedStorage<8, 40> mUnk993e9b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPartyDestinationCookieResponseIntermediateData&
    operator=(ScriptPartyDestinationCookieResponseIntermediateData const&);
    ScriptPartyDestinationCookieResponseIntermediateData(ScriptPartyDestinationCookieResponseIntermediateData const&);
    ScriptPartyDestinationCookieResponseIntermediateData();
#endif // @header-generator platform
};

} // namespace ScriptModuleParties
