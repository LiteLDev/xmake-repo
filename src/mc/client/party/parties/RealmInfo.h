#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/RealmId.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties::PartyUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct RealmInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> realmName;
    ::ll::UntypedStorage<8, 8>             realmID;
    // NOLINTEND
};
#else // @header-generator platform
struct RealmInfo {};
#endif // @header-generator platform

} // namespace Parties::PartyUtils
