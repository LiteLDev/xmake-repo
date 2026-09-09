#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

namespace ScriptDebuggerMessages {

class ProfilerCapture : public ::ScriptDebuggerMessages::EventEnvelope<ScriptDebuggerMessages::ProfilerCapture> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mCapturesBasePath;
    ::ll::TypedStorage<8, 24, std::string> mCaptureData;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
