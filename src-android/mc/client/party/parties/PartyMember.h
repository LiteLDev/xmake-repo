#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

struct PartyMember {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPfid;
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    // NOLINTEND
};

} // namespace Parties
