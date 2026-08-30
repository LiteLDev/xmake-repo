#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/party/parties/PartyMember.h"

namespace Parties {

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

} // namespace Parties
