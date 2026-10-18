#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/http/StatusCode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketConnectionFailedError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Bedrock::Http::StatusCode> mErrorCode;
    ::ll::TypedStorage<8, 24, std::string>                mUri;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk1f4664;
    ::ll::UntypedStorage<8, 32> mUnk9923cf;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptWebSocketConnectionFailedError& operator=(ScriptWebSocketConnectionFailedError const&);
    ScriptWebSocketConnectionFailedError(ScriptWebSocketConnectionFailedError const&);
#endif // @header-generator platform
    ScriptWebSocketConnectionFailedError();
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
