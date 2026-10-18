#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/party/parties/PartyDestinationExternal.h"
#include "mc/client/party/parties/PartyDestinationGathering.h"
#include "mc/client/party/parties/PartyDestinationMenus.h"
#include "mc/client/party/parties/PartyDestinationRealm.h"
#include "mc/client/party/parties/PartyDestinationXblP2P.h"
#include "mc/client/party/parties/PartyMember.h"
#include "mc/client/party/parties/PartyPendingInvite.h"
#include "mc/client/party/parties/PartyPrivacy.h"
#include "mc/client/party/parties/PartyState.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
class Party {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 48, ::Parties::PartyMember> mLeader;
    ::ll::TypedStorage<4, 4, ::Parties::PartyPrivacy> mPrivacy;
    ::ll::TypedStorage<8, 24, std::vector<Parties::PartyMember>> mMembers;
    ::ll::TypedStorage<1, 1, bool> mRestrictInvitesToLeader;
    ::ll::TypedStorage<4, 4, int> mMaxMemberCount;
    ::ll::TypedStorage<8, 24, std::vector<Parties::PartyPendingInvite>> mPendingInvites;
    ::ll::TypedStorage<4, 4, ::Parties::PartyState> mState;
    ::ll::TypedStorage<8, 248, std::variant<Parties::PartyDestinationXblP2P, Parties::PartyDestinationMenus, Parties::PartyDestinationRealm, Parties::PartyDestinationGathering, Parties::PartyDestinationExternal>> mDestination;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mDisconnectedMemberXuids;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class Party {};
#endif // @header-generator platform

} // namespace Parties
