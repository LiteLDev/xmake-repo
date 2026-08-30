#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptInternalWebSocketError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::error_code> mError;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
