#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/party/parties/PartyMember.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct JoinablePartyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                       mId;
    ::ll::TypedStorage<8, 24, std::string>                       mConnectionString;
    ::ll::TypedStorage<8, 24, std::vector<Parties::PartyMember>> mFriendsInParty;
    ::ll::TypedStorage<4, 4, int>                                mCurrentPlayers;
    ::ll::TypedStorage<4, 4, int>                                mMaxPlayers;
    // NOLINTEND
};
#else // @header-generator platform
struct JoinablePartyData {};
#endif // @header-generator platform

} // namespace Parties
