#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentParameterCacheHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mHash;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
