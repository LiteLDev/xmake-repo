#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/party/parties/PartyMember.h"
#include "mc/client/party/parties/PartyPendingInvite.h"
#include "mc/client/party/parties/PartyPrivacy.h"
#include "mc/client/party/parties/PartyProperties.h"

namespace Parties {

struct PartyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                              mId;
    ::ll::TypedStorage<8, 24, std::string>                              mConnectionString;
    ::ll::TypedStorage<8, 48, ::Parties::PartyMember>                   mLeader;
    ::ll::TypedStorage<4, 4, ::Parties::PartyPrivacy>                   mPrivacy;
    ::ll::TypedStorage<4, 4, int>                                       mMaxPlayers;
    ::ll::TypedStorage<8, 24, std::vector<Parties::PartyMember>>        mMembers;
    ::ll::TypedStorage<1, 1, bool>                                      mRestrictInvitesToLeader;
    ::ll::TypedStorage<8, 24, std::vector<Parties::PartyPendingInvite>> mPendingInvites;
    ::ll::TypedStorage<8, 248, ::Parties::PartyProperties>              mProperties;
    // NOLINTEND
};

} // namespace Parties
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
