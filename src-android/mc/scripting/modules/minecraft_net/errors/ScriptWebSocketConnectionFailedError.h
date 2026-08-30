#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
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
    ::ll::TypedStorage<4, 4, ::Bedrock::Http::StatusCode> mErrorCode;
    ::ll::TypedStorage<8, 24, std::string>                mUri;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketConnectionFailedError();
};

} // namespace ScriptModuleMinecraftNet
