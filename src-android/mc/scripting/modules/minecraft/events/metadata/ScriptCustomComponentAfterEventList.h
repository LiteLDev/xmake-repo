#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace ScriptModuleMinecraft { class IScriptCustomComponentAfterEventSignal; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomComponentAfterEventList {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ScriptModuleMinecraft::IScriptCustomComponentAfterEventSignal>>> mHandles;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentAfterEventList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptCustomComponentAfterEventList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
