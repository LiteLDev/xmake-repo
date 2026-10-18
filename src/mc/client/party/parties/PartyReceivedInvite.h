#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/party/parties/PartyMember.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyReceivedInvite {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mPartyId;
    ::ll::TypedStorage<8, 24, std::string>            mConnectionString;
    ::ll::TypedStorage<8, 48, ::Parties::PartyMember> mInviter;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyReceivedInvite {};
#endif // @header-generator platform

} // namespace Parties
