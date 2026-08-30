#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ScriptDiagnosticsDescriptor.h"
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

namespace ScriptDebuggerMessages {

class ScriptDiagnosticsSchemaPayload
: public ::ScriptDebuggerMessages::EventEnvelope<ScriptDebuggerMessages::ScriptDiagnosticsSchemaPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptDiagnosticsDescriptor>> mDescriptors;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
