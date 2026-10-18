#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/AuthServiceStatus.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct AuthServiceMultiplayerSession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::AuthServiceStatus> status;
    ::ll::TypedStorage<8, 24, std::string>                signedToken;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthServiceMultiplayerSession& operator=(AuthServiceMultiplayerSession const&);
};
#else // @header-generator platform
struct AuthServiceMultiplayerSession {};
#endif // @header-generator platform

} // namespace Social
