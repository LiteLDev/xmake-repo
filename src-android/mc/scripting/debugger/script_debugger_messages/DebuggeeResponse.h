#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/scripting/debugger/script_debugger_messages/ResponseEnvelope.h"

namespace ScriptDebuggerMessages {

struct DebuggeeResponse : public ::ScriptDebuggerMessages::ResponseEnvelope<ScriptDebuggerMessages::DebuggeeResponse> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mRequestSeq;
    ::ll::TypedStorage<1, 1, bool>                                 mSuccess;
    ::ll::TypedStorage<8, 24, std::string>                         mResponseMessage;
    ::ll::TypedStorage<8, 56, std::optional<cereal::DynamicValue>> mArgs;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
