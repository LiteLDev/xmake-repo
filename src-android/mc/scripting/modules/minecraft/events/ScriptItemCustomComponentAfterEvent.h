#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubAdapterAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentInterface.h"

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentAfterEvent
: public ::ScriptModuleMinecraft::ScriptCustomComponentPubSubAdapterAfterEvent<
      ScriptModuleMinecraft::ScriptItemCustomComponentInterface> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemCustomComponentAfterEvent() = default;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
