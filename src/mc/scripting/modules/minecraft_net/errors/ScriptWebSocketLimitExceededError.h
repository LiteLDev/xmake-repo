#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketLimitExceededError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mMaxConcurrentConnections;
    ::ll::TypedStorage<8, 8, ulong> mConnectedSockets;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkacc5ff;
    ::ll::UntypedStorage<8, 8> mUnkf0dd3c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptWebSocketLimitExceededError& operator=(ScriptWebSocketLimitExceededError const&);
    ScriptWebSocketLimitExceededError(ScriptWebSocketLimitExceededError const&);
#endif // @header-generator platform
    ScriptWebSocketLimitExceededError();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
