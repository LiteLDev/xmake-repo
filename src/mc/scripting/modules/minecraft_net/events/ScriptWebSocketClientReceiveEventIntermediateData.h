#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftNet {

struct ScriptWebSocketClientReceiveEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mMessage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk892825;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptWebSocketClientReceiveEventIntermediateData&
    operator=(ScriptWebSocketClientReceiveEventIntermediateData const&);
    ScriptWebSocketClientReceiveEventIntermediateData(ScriptWebSocketClientReceiveEventIntermediateData const&);
#endif // @header-generator platform
    ScriptWebSocketClientReceiveEventIntermediateData();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptWebSocketClientReceiveEventIntermediateData(::std::string const& message);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& message);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
