#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftNet {

struct ScriptWebSocketClientReceiveEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClientReceiveEventIntermediateData();
};

} // namespace ScriptModuleMinecraftNet
