#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"
#include "mc/scripting/debugger/script_debugger_messages/PluginDetails.h"

namespace ScriptDebuggerMessages {

struct ProtocolEvent : public ::ScriptDebuggerMessages::EventEnvelope<ScriptDebuggerMessages::ProtocolEvent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                 mVersion;
    ::ll::TypedStorage<8, 24, std::vector<ScriptDebuggerMessages::PluginDetails>> mPlugins;
    ::ll::TypedStorage<1, 1, bool>                                                mRequirePasscode;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
