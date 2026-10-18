#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef const> mEntity;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mEntity;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
