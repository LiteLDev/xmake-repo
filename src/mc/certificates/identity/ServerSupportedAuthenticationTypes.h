#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerSupportedAuthenticationTypes {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> acceptsOnlineAuth;
    ::ll::TypedStorage<1, 1, bool> acceptsSelfSignedAuth;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk9a6939;
    ::ll::UntypedStorage<1, 1> mUnkf62aa6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ServerSupportedAuthenticationTypes& operator=(ServerSupportedAuthenticationTypes const&);
    ServerSupportedAuthenticationTypes(ServerSupportedAuthenticationTypes const&);
    ServerSupportedAuthenticationTypes();
#endif // @header-generator platform
};
