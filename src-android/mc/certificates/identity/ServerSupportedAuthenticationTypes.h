#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerSupportedAuthenticationTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> acceptsOnlineAuth;
    ::ll::TypedStorage<1, 1, bool> acceptsSelfSignedAuth;
    // NOLINTEND
};
