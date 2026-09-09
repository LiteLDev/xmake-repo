#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace ScriptDebuggerMessages {

struct ScriptDebuggerPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mType;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mEventPayload;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
