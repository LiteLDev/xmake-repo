#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/party/parties/PartyMember.h"

namespace Parties {

struct PartyLeaderUpdatedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mPartyId;
    ::ll::TypedStorage<8, 48, ::Parties::PartyMember> mLeader;
    // NOLINTEND
};

} // namespace Parties
