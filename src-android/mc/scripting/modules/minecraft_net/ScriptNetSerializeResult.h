#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftNet {

struct ScriptNetSerializeResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> contentType;
    ::ll::TypedStorage<8, 24, std::string> body;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
