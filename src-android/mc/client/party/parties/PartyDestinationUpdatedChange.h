#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/party/parties/PartyDestinationExternal.h"
#include "mc/client/party/parties/PartyDestinationGathering.h"
#include "mc/client/party/parties/PartyDestinationMenus.h"
#include "mc/client/party/parties/PartyDestinationRealm.h"
#include "mc/client/party/parties/PartyDestinationXblP2P.h"

namespace Parties {

struct PartyDestinationUpdatedChange {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 248, std::variant<Parties::PartyDestinationXblP2P, Parties::PartyDestinationMenus, Parties::PartyDestinationRealm, Parties::PartyDestinationGathering, Parties::PartyDestinationExternal>> mDestination;
    // clang-format on
    // NOLINTEND
};

} // namespace Parties
