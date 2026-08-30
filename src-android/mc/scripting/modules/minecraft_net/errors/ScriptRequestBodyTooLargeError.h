#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptRequestBodyTooLargeError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mProvidedBytes;
    ::ll::TypedStorage<4, 4, uint> mMaxBytes;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRequestBodyTooLargeError();
};

} // namespace ScriptModuleMinecraftNet
