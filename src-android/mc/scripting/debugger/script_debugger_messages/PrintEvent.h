#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

namespace ScriptDebuggerMessages {

struct PrintEvent : public ::ScriptDebuggerMessages::EventEnvelope<ScriptDebuggerMessages::PrintEvent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mType;
    ::ll::TypedStorage<4, 4, int>          mLogLevel;
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
