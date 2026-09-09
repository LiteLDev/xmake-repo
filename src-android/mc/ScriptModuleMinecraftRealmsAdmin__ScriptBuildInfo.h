#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftRealmsAdmin {

struct ScriptBuildInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mServerVersion;
    ::ll::TypedStorage<8, 24, std::string> mSessionId;
    ::ll::TypedStorage<8, 24, std::string> mBuildId;
    ::ll::TypedStorage<8, 24, std::string> mBranch;
    ::ll::TypedStorage<8, 24, std::string> mCommitId;
    ::ll::TypedStorage<8, 24, std::string> mConfiguration;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftRealmsAdmin
