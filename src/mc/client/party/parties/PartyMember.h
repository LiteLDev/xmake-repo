#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyMember {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPfid;
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyMember {};
#endif // @header-generator platform

} // namespace Parties
