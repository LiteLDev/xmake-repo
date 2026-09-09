#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubAdapterStorage.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentInterface.h"

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptCustomComponentPubSubAdapterStorage<
      ScriptModuleMinecraft::ScriptItemCustomComponentInterface> {
public:
    // prevent constructor by default
    ScriptItemCustomComponentIntermediateStorage& operator=(ScriptItemCustomComponentIntermediateStorage const&);
};

} // namespace ScriptModuleMinecraft
