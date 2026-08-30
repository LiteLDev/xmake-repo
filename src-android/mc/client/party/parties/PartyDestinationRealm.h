#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/RealmId.h"
#include "mc/network/packet/PartyDestinationCookieIntent.h"

namespace Parties {

struct PartyDestinationRealm {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                            realmId;
    ::ll::TypedStorage<8, 24, std::string>                                scanText;
    ::ll::TypedStorage<8, 24, std::string>                                redactedText;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                 mCookie;
    ::ll::TypedStorage<1, 2, std::optional<PartyDestinationCookieIntent>> mIntent;
    // NOLINTEND
};

} // namespace Parties
