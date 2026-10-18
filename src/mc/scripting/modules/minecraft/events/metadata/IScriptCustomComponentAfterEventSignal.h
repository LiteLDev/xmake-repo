#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/IScriptAfterEventSignal.h"

namespace ScriptModuleMinecraft {

class IScriptCustomComponentAfterEventSignal : public ::ScriptModuleMinecraft::IScriptAfterEventSignal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mEventType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mEventType;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    IScriptCustomComponentAfterEventSignal();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
