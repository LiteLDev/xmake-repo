#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/RealmId.h"
#include "mc/network/packet/PartyDestinationCookieIntent.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct PartyDestinationRealm {};
#endif // @header-generator platform

} // namespace Parties
