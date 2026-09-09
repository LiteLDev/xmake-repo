#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

namespace ScriptDebuggerMessages {

struct StartProfilerMessage
: public ::ScriptDebuggerMessages::NetworkPayload<ScriptDebuggerMessages::StartProfilerMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mType;
    ::ll::TypedStorage<8, 16, ::mce::UUID> mTargetModuleUUID;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
