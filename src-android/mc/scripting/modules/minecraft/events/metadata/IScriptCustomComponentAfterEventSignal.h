#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/IScriptAfterEventSignal.h"

namespace ScriptModuleMinecraft {

class IScriptCustomComponentAfterEventSignal : public ::ScriptModuleMinecraft::IScriptAfterEventSignal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mEventType;
    // NOLINTEND

public:
    // prevent constructor by default
    IScriptCustomComponentAfterEventSignal();
};

} // namespace ScriptModuleMinecraft
