#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

struct PartyMemberUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMemberPfid;
    ::ll::TypedStorage<1, 1, bool>         mIsConnected;
    // NOLINTEND
};

} // namespace Parties
