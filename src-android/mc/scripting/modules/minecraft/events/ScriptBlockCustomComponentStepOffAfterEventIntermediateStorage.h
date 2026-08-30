#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef const> mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage();
};

} // namespace ScriptModuleMinecraft
