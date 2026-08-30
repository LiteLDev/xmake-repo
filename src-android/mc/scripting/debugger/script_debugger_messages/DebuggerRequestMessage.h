#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

namespace ScriptDebuggerMessages {

struct DebuggerRequestMessage
: public ::ScriptDebuggerMessages::NetworkPayload<ScriptDebuggerMessages::DebuggerRequestMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                         mType;
    ::ll::TypedStorage<4, 4, int>                                  mRequestSeq;
    ::ll::TypedStorage<8, 24, std::string>                         mRequest;
    ::ll::TypedStorage<8, 56, std::optional<cereal::DynamicValue>> mArgs;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
