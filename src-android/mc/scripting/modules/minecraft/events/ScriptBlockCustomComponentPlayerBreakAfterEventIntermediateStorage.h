#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef const> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage();
};

} // namespace ScriptModuleMinecraft
