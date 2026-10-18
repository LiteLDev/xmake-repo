#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/scripting/modules/parties/ScriptPartyInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleParties {

struct ScriptPartyChangedIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData>            mPlayer;
    ::ll::TypedStorage<8, 40, std::optional<ScriptModuleParties::ScriptPartyInfo>> mPartyInformation;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 96> mUnk47106d;
    ::ll::UntypedStorage<8, 48> mUnk1ca3fa;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPartyChangedIntermediateData& operator=(ScriptPartyChangedIntermediateData const&);
    ScriptPartyChangedIntermediateData(ScriptPartyChangedIntermediateData const&);
    ScriptPartyChangedIntermediateData();
#endif // @header-generator platform
};

} // namespace ScriptModuleParties
