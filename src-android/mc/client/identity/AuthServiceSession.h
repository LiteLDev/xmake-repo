#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/MinecraftAccountPermissions.h"
#include "mc/client/identity/AuthServiceStatus.h"
#include "mc/client/social/AuthToken.h"

namespace Social {

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

} // namespace Social
