#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

namespace ScriptDebuggerMessages {

struct ProtocolResponse : public ::ScriptDebuggerMessages::NetworkPayload<ScriptDebuggerMessages::ProtocolResponse> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mType;
    ::ll::TypedStorage<4, 4, int>                         mVersion;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>>   mTargetModuleUUID;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPasscode;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
