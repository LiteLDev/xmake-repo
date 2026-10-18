#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/network/packet/PartyDestinationCookieIntent.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties::PartyUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct DestinationCookieInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   cookie;
    ::ll::TypedStorage<1, 1, ::PartyDestinationCookieIntent> intent;
    ::ll::TypedStorage<8, 24, std::string>                   displayName;
    // NOLINTEND
};
#else // @header-generator platform
struct DestinationCookieInfo {};
#endif // @header-generator platform

} // namespace Parties::PartyUtils
