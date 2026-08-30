#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PartyDestinationCookieIntent.h"

namespace Parties {

struct PartyDestinationXblP2P {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                xblSessionHandleId;
    ::ll::TypedStorage<8, 24, std::string>                                scanText;
    ::ll::TypedStorage<8, 24, std::string>                                redactedText;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                 mCookie;
    ::ll::TypedStorage<1, 2, std::optional<PartyDestinationCookieIntent>> mIntent;
    // NOLINTEND
};

} // namespace Parties
