#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_net/events/ScriptWebSocketClientCloseReasons.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptWebSocketClientCloseEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptWebSocketClientCloseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraftNet::ScriptWebSocketClientCloseReasons> mReason;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClientCloseEvent();
};

} // namespace ScriptModuleMinecraftNet
