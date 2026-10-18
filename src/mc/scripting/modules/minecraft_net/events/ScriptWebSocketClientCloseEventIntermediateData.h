#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_net/events/ScriptWebSocketClientCloseReasons.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraftNet {

struct ScriptWebSocketClientCloseEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraftNet::ScriptWebSocketClientCloseReasons> mReason;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk509d22;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptWebSocketClientCloseEventIntermediateData& operator=(ScriptWebSocketClientCloseEventIntermediateData const&);
    ScriptWebSocketClientCloseEventIntermediateData(ScriptWebSocketClientCloseEventIntermediateData const&);
#endif // @header-generator platform
    ScriptWebSocketClientCloseEventIntermediateData();
};

} // namespace ScriptModuleMinecraftNet
