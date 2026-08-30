#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptHttpRequestLimitExceededError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mMaxConcurrentRequests;
    ::ll::TypedStorage<8, 8, ulong> mInFlightRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptHttpRequestLimitExceededError();
};

} // namespace ScriptModuleMinecraftNet
