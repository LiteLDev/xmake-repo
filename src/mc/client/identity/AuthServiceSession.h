#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/MinecraftAccountPermissions.h"
#include "mc/client/identity/AuthServiceStatus.h"
#include "mc/client/social/AuthToken.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct AuthServiceSession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                              status;
    ::ll::UntypedStorage<8, 24>                             authToken;
    ::ll::TypedStorage<8, 8, long>                          validUntil;
    ::ll::TypedStorage<8, 8, ::MinecraftAccountPermissions> accountPermissions;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthServiceSession& operator=(AuthServiceSession const&);
};
#else // @header-generator platform
struct AuthServiceSession {};
#endif // @header-generator platform

} // namespace Social
