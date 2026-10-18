#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/party/parties/PartyMember.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyEventLeaderChanged {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::Parties::PartyMember> mLeader;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyEventLeaderChanged {};
#endif // @header-generator platform

} // namespace Parties
