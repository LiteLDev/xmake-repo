#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleParties {

struct ScriptPartyInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<1, 1, bool>         mIsLeader;
    // NOLINTEND
};

} // namespace ScriptModuleParties
