#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/scripting/modules/minecraft_net/events/ScriptWebSocketClientCloseReasons.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptWebSocketClientCloseEventIntermediateData; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptWebSocketClientCloseEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraftNet::ScriptWebSocketClientCloseReasons> mReason;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk3e7405;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptWebSocketClientCloseEvent& operator=(ScriptWebSocketClientCloseEvent const&);
    ScriptWebSocketClientCloseEvent(ScriptWebSocketClientCloseEvent const&);
#endif // @header-generator platform
    ScriptWebSocketClientCloseEvent();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
