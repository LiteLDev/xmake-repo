#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAfterEventSignalHandle.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAfterEventList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptAfterEventSignalHandle>> mSignalHandles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void deferredFlush(::ScriptDeferredFlushTracker&);

    MCNAPI std::vector<const ScriptModuleMinecraft::ScriptAfterEventSignalHandle*>
           getAllSignalsByEventType(ulong) const;

    MCNAPI void postFlush();

    MCNAPI void preFlush();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
