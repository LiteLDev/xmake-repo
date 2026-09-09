#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

namespace ScriptDebuggerMessages {

struct StopProfilerMessage
: public ::ScriptDebuggerMessages::NetworkPayload<ScriptDebuggerMessages::StopProfilerMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mType;
    ::ll::TypedStorage<8, 16, ::mce::UUID> mTargetModuleUUID;
    ::ll::TypedStorage<8, 24, std::string> mCapturesPath;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
