#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptWebSocketClientReceiveEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptWebSocketClientReceiveEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClientReceiveEvent();
};

} // namespace ScriptModuleMinecraftNet
