#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftRealmsAdmin {

struct ScriptAllowListEntryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> name;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> xuid;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftRealmsAdmin
