#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptWebSocketClientReceiveEventIntermediateData; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptWebSocketClientReceiveEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mMessage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkdd4238;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptWebSocketClientReceiveEvent& operator=(ScriptWebSocketClientReceiveEvent const&);
    ScriptWebSocketClientReceiveEvent(ScriptWebSocketClientReceiveEvent const&);
#endif // @header-generator platform
    ScriptWebSocketClientReceiveEvent();
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
