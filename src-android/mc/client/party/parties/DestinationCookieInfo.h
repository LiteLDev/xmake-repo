#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PartyDestinationCookieIntent.h"

namespace Parties::PartyUtils {

struct DestinationCookieInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   cookie;
    ::ll::TypedStorage<1, 1, ::PartyDestinationCookieIntent> intent;
    ::ll::TypedStorage<8, 24, std::string>                   displayName;
    // NOLINTEND
};

} // namespace Parties::PartyUtils
