#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/party/parties/PartyPrivacy.h"

namespace Parties {

struct PartyPrivacyUpdatedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mPartyId;
    ::ll::TypedStorage<4, 4, ::Parties::PartyPrivacy> mPrivacy;
    // NOLINTEND
};

} // namespace Parties
