#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

namespace ScriptDebuggerMessages {

struct CommandMessage : public ::ScriptDebuggerMessages::NetworkPayload<ScriptDebuggerMessages::CommandMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mType;
    ::ll::TypedStorage<8, 24, std::string> mCommand;
    ::ll::TypedStorage<8, 24, std::string> mDimensionType;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
